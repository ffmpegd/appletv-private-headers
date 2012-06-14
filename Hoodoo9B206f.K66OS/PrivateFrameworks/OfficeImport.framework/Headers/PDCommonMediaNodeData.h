/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDCommonTimeNodeData.h"

@class PDAnimationTargetElement;

__attribute__((visibility("hidden")))
@interface PDCommonMediaNodeData : PDCommonTimeNodeData {
@private
	PDAnimationTargetElement *mTarget;	// 92 = 0x5c
	BOOL mIsMuted;	// 96 = 0x60
	BOOL mIsShowWhenStopped;	// 97 = 0x61
	long mNumberOfSlides;	// 100 = 0x64
	long mVolume;	// 104 = 0x68
}
@property(assign) BOOL isMuted;	// G=0x3458b49d; S=0x3458b4ad; converted property
@property(assign) BOOL isShowWhenStopped;	// G=0x3458b4bd; S=0x3458b4cd; converted property
@property(assign) long numberOfSlides;	// G=0x3458b4dd; S=0x3458b4ed; converted property
@property(retain) id target;	// G=0x3458b48d; S=0x3458c7e9; converted property
@property(assign) long volume;	// G=0x3458b4fd; S=0x3458b50d; converted property
- (id)init;	// 0x3458c79d
- (void)dealloc;	// 0x3458c829
// converted property getter: - (BOOL)isMuted;	// 0x3458b49d
// converted property getter: - (BOOL)isShowWhenStopped;	// 0x3458b4bd
// converted property getter: - (long)numberOfSlides;	// 0x3458b4dd
// converted property setter: - (void)setIsMuted:(BOOL)muted;	// 0x3458b4ad
// converted property setter: - (void)setIsShowWhenStopped:(BOOL)stopped;	// 0x3458b4cd
// converted property setter: - (void)setNumberOfSlides:(long)slides;	// 0x3458b4ed
// converted property setter: - (void)setTarget:(id)target;	// 0x3458c7e9
// converted property setter: - (void)setVolume:(long)volume;	// 0x3458b50d
// converted property getter: - (id)target;	// 0x3458b48d
// converted property getter: - (long)volume;	// 0x3458b4fd
@end
