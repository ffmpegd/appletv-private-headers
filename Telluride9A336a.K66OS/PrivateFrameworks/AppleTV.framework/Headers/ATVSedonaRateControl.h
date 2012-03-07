/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVSedonaRateControl : BRControl {
@private
	float _initialRating;	// 48 = 0x30
	float _curRating;	// 52 = 0x34
	float _actualRating;	// 56 = 0x38
	BRImageControl *_starImageControl;	// 60 = 0x3c
}
@property(readonly, assign) float actualRating;	// G=0x339c6075; converted property
+ (float)postSedonaRateDialogWithItem:(id)item;	// 0x339c5af5
+ (id)rateControlWithItem:(id)item;	// 0x339c5b61
- (id)initWithItem:(id)item;	// 0x339c5b9d
- (id)_imageForKey:(id)key;	// 0x339c639d
- (id)_starImageForRating:(float)rating predicted:(BOOL)predicted;	// 0x339c6411
- (id)accessibilityLabel;	// 0x339c6521
// converted property getter: - (float)actualRating;	// 0x339c6075
- (BOOL)brEventAction:(id)action;	// 0x339c6085
- (void)dealloc;	// 0x339c6029
- (BOOL)isAccessibilityElement;	// 0x339c651d
@end

