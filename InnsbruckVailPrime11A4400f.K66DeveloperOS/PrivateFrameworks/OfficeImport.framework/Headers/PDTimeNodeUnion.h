/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>

@class PDParallelTimeNode, PDSequentialTimeNode, PDAudioNode, PDVideoNode, PDAnimateTimeBehavior, PDAnimateEffectBehavior, PDSetBehavior, PDAnimateMotionBehavior, PDAnimateRotateBehavior, PDAnimateScaleBehavior, PDCmdBehavior, PDAnimateColorBehavior;

@interface PDTimeNodeUnion : NSObject {
	PDAnimateTimeBehavior *mTimeBehavior;	// 4 = 0x4
	PDAnimateEffectBehavior *mEffectBehavior;	// 8 = 0x8
	PDAnimateMotionBehavior *mMotionBehavior;	// 12 = 0xc
	PDAnimateRotateBehavior *mRotateBehavior;	// 16 = 0x10
	PDAnimateScaleBehavior *mScaleBehavior;	// 20 = 0x14
	PDAnimateColorBehavior *mColorBehavior;	// 24 = 0x18
	PDAudioNode *mAudio;	// 28 = 0x1c
	PDVideoNode *mVideo;	// 32 = 0x20
	PDParallelTimeNode *mParallelTimeNodeGroup;	// 36 = 0x24
	PDSequentialTimeNode *mSequentialTimeNodeGroup;	// 40 = 0x28
	PDSetBehavior *mSetBehavior;	// 44 = 0x2c
	PDCmdBehavior *mCmdBehavior;	// 48 = 0x30
}
@property(retain) id audio;	// G=0x31920c89; S=0x31896ded; converted property
@property(retain) id behavior;	// G=0x31920cc9; S=0x31849415; converted property
@property(retain) id cmdBehavior;	// G=0x31920cd9; S=0x3188e2d1; converted property
@property(retain) id colorBehavior;	// G=0x31920c3d; S=0x31920c4d; converted property
@property(retain) id effectBehavior;	// G=0x31920bfd; S=0x31849669; converted property
@property(retain) id motionBehavior;	// G=0x31920c0d; S=0x3183feb9; converted property
@property(retain) id parallel;	// G=0x31920ca9; S=0x3183ff31; converted property
@property(retain) id rotateBehavior;	// G=0x31920c1d; S=0x3188a541; converted property
@property(retain) id scaleBehavior;	// G=0x31920c2d; S=0x3187df09; converted property
@property(retain) id sequential;	// G=0x31920cb9; S=0x3183ff6d; converted property
@property(retain) id timeBehavior;	// G=0x31920bed; S=0x31855379; converted property
@property(retain) id video;	// G=0x31920c99; S=0x3189b20d; converted property
- (id)init;	// 0x3183efbd
// converted property getter: - (id)audio;	// 0x31920c89
// converted property getter: - (id)behavior;	// 0x31920cc9
// converted property getter: - (id)cmdBehavior;	// 0x31920cd9
// converted property getter: - (id)colorBehavior;	// 0x31920c3d
- (id)commonBehavior;	// 0x31920b7d
- (void)dealloc;	// 0x31840575
// converted property getter: - (id)effectBehavior;	// 0x31920bfd
// converted property getter: - (id)motionBehavior;	// 0x31920c0d
// converted property getter: - (id)parallel;	// 0x31920ca9
// converted property getter: - (id)rotateBehavior;	// 0x31920c1d
// converted property getter: - (id)scaleBehavior;	// 0x31920c2d
// converted property getter: - (id)sequential;	// 0x31920cb9
// converted property setter: - (void)setAudio:(id)audio;	// 0x31896ded
// converted property setter: - (void)setBehavior:(id)behavior;	// 0x31849415
// converted property setter: - (void)setCmdBehavior:(id)behavior;	// 0x3188e2d1
// converted property setter: - (void)setColorBehavior:(id)behavior;	// 0x31920c4d
// converted property setter: - (void)setEffectBehavior:(id)behavior;	// 0x31849669
// converted property setter: - (void)setMotionBehavior:(id)behavior;	// 0x3183feb9
// converted property setter: - (void)setParallel:(id)parallel;	// 0x3183ff31
// converted property setter: - (void)setRotateBehavior:(id)behavior;	// 0x3188a541
// converted property setter: - (void)setScaleBehavior:(id)behavior;	// 0x3187df09
// converted property setter: - (void)setSequential:(id)sequential;	// 0x3183ff6d
// converted property setter: - (void)setTimeBehavior:(id)behavior;	// 0x31855379
// converted property setter: - (void)setVideo:(id)video;	// 0x3189b20d
// converted property getter: - (id)timeBehavior;	// 0x31920bed
// converted property getter: - (id)video;	// 0x31920c99
@end

