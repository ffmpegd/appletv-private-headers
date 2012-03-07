/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"

@class GQDSStyle, GQDWPLayoutStorage;

__attribute__((visibility("hidden")))
@interface GQDWPLayoutFrame : NSObject {
@private
	char *mStyleRef;	// 4 = 0x4
	GQDSStyle *mStyle;	// 8 = 0x8
	GQDWPLayoutStorage *mStorage;	// 12 = 0xc
	unsigned mTextScale;	// 16 = 0x10
}
- (void)dealloc;	// 0x3049c9d9
- (BOOL)isBlank;	// 0x3049c8f1
- (id)layoutStyle;	// 0x3049c7a9
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x3049ca99
- (void)resolveStyleRef;	// 0x3049c7d9
- (id)storage;	// 0x3049c7b9
- (unsigned)textScale;	// 0x3049c7c9
@end

