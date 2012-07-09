/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class DOMNode;
@protocol DOMNodeFilter;

@interface DOMNodeIterator : DOMObject {
}
@property(readonly, assign) BOOL expandEntityReferences;	// G=0x35852cfd; 
@property(readonly, assign) id<DOMNodeFilter> filter;	// G=0x35852bf9; 
@property(readonly, assign) BOOL pointerBeforeReferenceNode;	// G=0x35852e31; 
@property(readonly, assign) DOMNode *referenceNode;	// G=0x35852d2d; 
@property(readonly, assign) DOMNode *root;	// G=0x35852ac9; 
@property(readonly, assign) unsigned whatToShow;	// G=0x35852bcd; 
- (void)dealloc;	// 0x356fb81d
- (void)detach;	// 0x356fb961
// declared property getter: - (BOOL)expandEntityReferences;	// 0x35852cfd
// declared property getter: - (id)filter;	// 0x35852bf9
- (void)finalize;	// 0x358529ad
- (id)nextNode;	// 0x356fa961
// declared property getter: - (BOOL)pointerBeforeReferenceNode;	// 0x35852e31
- (id)previousNode;	// 0x35852e61
// declared property getter: - (id)referenceNode;	// 0x35852d2d
// declared property getter: - (id)root;	// 0x35852ac9
// declared property getter: - (unsigned)whatToShow;	// 0x35852bcd
@end
