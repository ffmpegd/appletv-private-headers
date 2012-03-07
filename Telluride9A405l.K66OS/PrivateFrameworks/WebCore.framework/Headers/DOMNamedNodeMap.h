/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"


__attribute__((visibility("hidden")))
@interface DOMNamedNodeMap : DOMObject {
}
@property(readonly, assign) unsigned length;	// G=0x3072c8d5; 
- (void)dealloc;	// 0x3072c901
- (void)finalize;	// 0x3072da09
- (id)getNamedItem:(id)item;	// 0x3072d849
- (id)getNamedItemNS:(id)ns :(id)arg2;	// 0x3072cf6d
- (id)getNamedItemNS:(id)ns localName:(id)name;	// 0x3072d1a9
- (id)item:(unsigned)item;	// 0x3072d3e5
// declared property getter: - (unsigned)length;	// 0x3072c8d5
- (id)removeNamedItem:(id)item;	// 0x3072d525
- (id)removeNamedItemNS:(id)ns :(id)arg2;	// 0x3072c97d
- (id)removeNamedItemNS:(id)ns localName:(id)name;	// 0x3072cbcd
- (id)setNamedItem:(id)item;	// 0x3072d6f9
- (id)setNamedItemNS:(id)ns;	// 0x3072ce1d
@end

