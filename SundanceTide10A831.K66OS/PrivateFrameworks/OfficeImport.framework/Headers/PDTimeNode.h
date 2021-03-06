/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class PDCmdBehavior, PDAnimateColorBehavior, PDParallelTimeNodeGroup, PDSequentialTimeNodeGroup, PDAudioMediaNode, PDVideoMediaNode, NSMutableArray, PDAnimateTimeBehavior, PDAnimateEffectBehavior, PDSetBehavior, PDAnimateMotionBehavior, PDAnimateRotateBehavior, PDAnimateScaleBehavior;

@interface PDTimeNode : NSObject {
	PDAnimateTimeBehavior *mTimeBehavior;	// 4 = 0x4
	PDAnimateEffectBehavior *mEffectBehavior;	// 8 = 0x8
	PDAnimateMotionBehavior *mMotionBehavior;	// 12 = 0xc
	PDAnimateRotateBehavior *mRotateBehavior;	// 16 = 0x10
	PDAnimateScaleBehavior *mScaleBehavior;	// 20 = 0x14
	PDAnimateColorBehavior *mColorBehavior;	// 24 = 0x18
	PDAudioMediaNode *mAudio;	// 28 = 0x1c
	PDVideoMediaNode *mVideo;	// 32 = 0x20
	PDParallelTimeNodeGroup *mParallelTimeNodeGroup;	// 36 = 0x24
	PDSequentialTimeNodeGroup *mSequentialTimeNodeGroup;	// 40 = 0x28
	NSMutableArray *mTimeConditionList;	// 44 = 0x2c
	PDSetBehavior *mSetBehavior;	// 48 = 0x30
	PDCmdBehavior *mCmdBehavior;	// 52 = 0x34
}
@property(retain) id audio;	// G=0x36c4c5b9; S=0x36b89719; converted property
@property(retain) id behavior;	// G=0x36c4c645; S=0x36b52a09; converted property
@property(retain) id cmdBehavior;	// G=0x36c4c655; S=0x36b82025; converted property
@property(retain) id colorBehavior;	// G=0x36c4c56d; S=0x36c4c57d; converted property
@property(retain) id effectBehavior;	// G=0x36c4c52d; S=0x36b52c5d; converted property
@property(retain) id motionBehavior;	// G=0x36c4c53d; S=0x36b0b471; converted property
@property(retain) id parallel;	// G=0x36c4c5d9; S=0x36b0b4e9; converted property
@property(retain) id rotateBehavior;	// G=0x36c4c54d; S=0x36b8ac09; converted property
@property(retain) id scaleBehavior;	// G=0x36c4c55d; S=0x36b7e9b9; converted property
@property(retain) id sequential;	// G=0x36c4c5e9; S=0x36b0b525; converted property
@property(retain) id timeBehavior;	// G=0x36c4c51d; S=0x36b59d31; converted property
@property(retain) id timeConditions;	// G=0x36c4c5f9; S=0x36c4c609; converted property
@property(retain) id video;	// G=0x36c4c5c9; S=0x36b946c9; converted property
- (id)init;	// 0x36b0a4f9
// converted property getter: - (id)audio;	// 0x36c4c5b9
// converted property getter: - (id)behavior;	// 0x36c4c645
// converted property getter: - (id)cmdBehavior;	// 0x36c4c655
// converted property getter: - (id)colorBehavior;	// 0x36c4c56d
- (id)commonBehavior;	// 0x36c4c4ad
- (void)dealloc;	// 0x36b0bfad
// converted property getter: - (id)effectBehavior;	// 0x36c4c52d
// converted property getter: - (id)motionBehavior;	// 0x36c4c53d
// converted property getter: - (id)parallel;	// 0x36c4c5d9
// converted property getter: - (id)rotateBehavior;	// 0x36c4c54d
// converted property getter: - (id)scaleBehavior;	// 0x36c4c55d
// converted property getter: - (id)sequential;	// 0x36c4c5e9
// converted property setter: - (void)setAudio:(id)audio;	// 0x36b89719
// converted property setter: - (void)setBehavior:(id)behavior;	// 0x36b52a09
// converted property setter: - (void)setCmdBehavior:(id)behavior;	// 0x36b82025
// converted property setter: - (void)setColorBehavior:(id)behavior;	// 0x36c4c57d
// converted property setter: - (void)setEffectBehavior:(id)behavior;	// 0x36b52c5d
// converted property setter: - (void)setMotionBehavior:(id)behavior;	// 0x36b0b471
// converted property setter: - (void)setParallel:(id)parallel;	// 0x36b0b4e9
// converted property setter: - (void)setRotateBehavior:(id)behavior;	// 0x36b8ac09
// converted property setter: - (void)setScaleBehavior:(id)behavior;	// 0x36b7e9b9
// converted property setter: - (void)setSequential:(id)sequential;	// 0x36b0b525
// converted property setter: - (void)setTimeBehavior:(id)behavior;	// 0x36b59d31
// converted property setter: - (void)setTimeConditions:(id)conditions;	// 0x36c4c609
// converted property setter: - (void)setVideo:(id)video;	// 0x36b946c9
// converted property getter: - (id)timeBehavior;	// 0x36c4c51d
// converted property getter: - (id)timeConditions;	// 0x36c4c5f9
// converted property getter: - (id)video;	// 0x36c4c5c9
@end

