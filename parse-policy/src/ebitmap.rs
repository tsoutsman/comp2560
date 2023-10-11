use crate::bindings::{ebitmap_node_t, ebitmap_t};

pub(crate) struct Iter {
    ptr: *const ebitmap_node_t,
    cursor: u32,
}

impl Iter {
    pub unsafe fn new(bit_map: ebitmap_t) -> Self {
        Self {
            ptr: bit_map.node,
            cursor: 0,
        }
    }
}

impl Iterator for Iter {
    type Item = u32;

    fn next(&mut self) -> Option<Self::Item> {
        loop {
            if self.ptr.is_null() {
                return None;
            }

            let node = unsafe { &*self.ptr };

            if self.cursor == 32 {
                self.ptr = node.next;
                self.cursor = 0;
                continue;
            }

            if node.map >> self.cursor & 1 == 1 {
                self.cursor += 1;
                return Some(node.startbit + self.cursor);
            } else {
                self.cursor += 1;
                continue;
            }
        }
    }
}
