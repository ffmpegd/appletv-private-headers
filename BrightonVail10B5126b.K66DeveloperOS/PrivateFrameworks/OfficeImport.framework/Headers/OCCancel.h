/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCCancelDelegate.h"
#import <NSObject.h> // Unknown library


@interface OCCancel : NSObject <OCCancelDelegate> {
	BOOL mIsCancelled;	// 4 = 0x4
	BOOL mIsQuit;	// 5 = 0x5
}
- (id)init;	// 0x34a60725
- (void)cancel;	// 0x34a60771
- (BOOL)isCancelled;	// 0x34a60785
- (BOOL)isQuit;	// 0x34a607b5
- (void)quit;	// 0x34a60795
@end
