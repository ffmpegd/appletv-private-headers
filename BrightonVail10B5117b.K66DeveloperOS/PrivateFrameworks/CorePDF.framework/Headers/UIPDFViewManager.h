/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library

@class UIView;

@interface UIPDFViewManager : NSObject {
	UIView *_activeView;	// 4 = 0x4
}
+ (id)sharedViewManager;	// 0x33a6fdb1
- (void)makeViewActive:(id)active;	// 0x33a6fe25
- (void)viewReleased:(id)released;	// 0x33a6ff09
@end

