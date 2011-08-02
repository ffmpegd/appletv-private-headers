/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OCDDelayedNodeContext.h"

@class EXState, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface EXSheetContext : NSObject <OCDDelayedNodeContext> {
@private
	EXState *mSheetState;	// 4 = 0x4
	NSURL *mPackageLocation;	// 8 = 0x8
	NSString *mType;	// 12 = 0xc
}
- (id)initWithSheetLocation:(id)sheetLocation sheetXmlType:(id)type state:(id)state;	// 0x34522d11
- (void)dealloc;	// 0x34525da1
- (bool)loadDelayedNode:(id)node;	// 0x345231f1
@end
