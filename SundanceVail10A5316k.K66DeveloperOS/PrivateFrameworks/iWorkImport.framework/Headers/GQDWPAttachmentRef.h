/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDWPAttachment.h"

@class GQDRoot;

__attribute__((visibility("hidden")))
@interface GQDWPAttachmentRef : GQDWPAttachment {
@private
	GQDRoot *mRoot;	// 8 = 0x8
	char *mUID;	// 12 = 0xc
}
- (id)initWithUID:(char *)uid root:(id)root;	// 0x36c5c36d
- (void)dealloc;	// 0x36c5c3d9
- (id)drawable;	// 0x36c5c445
@end
