/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDWPInlineList.h"


@interface GQDWPBookmark : GQDWPInlineList {
	CFStringRef mName;	// 8 = 0x8
	BOOL mRanged;	// 12 = 0xc
	BOOL mHidden;	// 13 = 0xd
}
- (void)dealloc;	// 0x368c8f1d
- (BOOL)isHidden;	// 0x368c8f81
- (BOOL)isRanged;	// 0x368c8f71
- (CFStringRef)name;	// 0x368c8f61
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x368c8f91
@end

