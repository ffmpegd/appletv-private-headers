/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MRLoadable.h"
#import "MRRenderable.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSDictionary, MCPlug, MRRenderer, MCPlugHaven, MCPlugParallel, MCPlugSerial, MRLayerClock, NSString;

@interface MRLayer : NSObject <MRLoadable, MRRenderable> {
	MRLayer *mSuperlayer;	// 4 = 0x4
	MCPlug *mPlug;	// 8 = 0x8
	MCPlugSerial *mPlugAsSerial;	// 12 = 0xc
	MCPlugParallel *mPlugAsParallel;	// 16 = 0x10
	MCPlugHaven *mPlugAsHaven;	// 20 = 0x14
	NSString *mUUID;	// 24 = 0x18
	CGSize mPixelSize;	// 28 = 0x1c
	double mTimeIn;	// 36 = 0x24
	BOOL mIsPreactivated;	// 44 = 0x2c
	BOOL mIsActivated;	// 45 = 0x2d
	BOOL mOkToDeferKenBurns;	// 46 = 0x2e
	MRLayerClock *mClock;	// 48 = 0x30
	XXStruct_vRz5EC *mState;	// 52 = 0x34
	BOOL mIsSelected;	// 56 = 0x38
	NSDictionary *mParameters;	// 60 = 0x3c
	MRRenderer *mRenderer;	// 64 = 0x40
	BOOL mIsPrecomputing;	// 68 = 0x44
	BOOL mIsReadonly;	// 69 = 0x45
	BOOL mDoAudio;	// 70 = 0x46
	BOOL mNeedsRendering;	// 71 = 0x47
	BOOL mNeedsToUpdateFilters;	// 72 = 0x48
	BOOL mNeedsToUpdateGeometry;	// 73 = 0x49
	BOOL mNeedsToRequestRebuildAudio;	// 74 = 0x4a
	BOOL mNeedsToRequestRebuildVolume;	// 75 = 0x4b
	NSMutableArray *mLayerCommandQueue;	// 76 = 0x4c
	BOOL mIsScheduledForDestruction;	// 80 = 0x50
	double mTimeStamp;	// 84 = 0x54
	BOOL mSupportsAccumulation;	// 92 = 0x5c
}
@property(readonly, assign) BOOL _isNative3D;	// G=0x314f653d; 
@property(readonly, assign) MRLayerClock *clock;	// G=0x314f3f3d; 
@property(readonly, assign) BOOL isActivated;	// G=0x314f64c5; @synthesize=mIsActivated
@property(readonly, assign) BOOL isAlphaFriendly;	// G=0x314f4765; 
@property(readonly, assign) BOOL isInfinite;	// G=0x314f4761; 
@property(readonly, assign) BOOL isNative3D;	// G=0x314f4709; 
@property(readonly, assign) BOOL isOpaque;	// G=0x314f475d; 
@property(readonly, assign) BOOL isPreactivated;	// G=0x314f64d5; @synthesize=mIsPreactivated
@property(readonly, assign) BOOL isScheduledForDestruction;	// G=0x314f652d; @synthesize=mIsScheduledForDestruction
@property(assign) BOOL isSelected;	// G=0x314f64e5; S=0x314f64f5; @synthesize=mIsSelected
@property(readonly, assign) NSDictionary *parameters;	// G=0x314f6485; @synthesize=mParameters
@property(assign, nonatomic) CGSize pixelSize;	// G=0x314f645d; S=0x314f3f5d; @synthesize=mPixelSize
@property(readonly, assign) MCPlug *plug;	// G=0x314f641d; @synthesize=mPlug
@property(readonly, assign) MCPlugHaven *plugAsHaven;	// G=0x314f644d; @synthesize=mPlugAsHaven
@property(readonly, assign) MCPlugParallel *plugAsParallel;	// G=0x314f643d; @synthesize=mPlugAsParallel
@property(readonly, assign) MCPlugSerial *plugAsSerial;	// G=0x314f642d; @synthesize=mPlugAsSerial
@property(readonly, assign) XXStruct_vRz5EC *state;	// G=0x314f3f4d; 
@property(readonly, assign) MRLayer *superlayer;	// G=0x314f640d; @synthesize=mSuperlayer
@property(readonly, assign) BOOL supportsAccumulation;	// G=0x314f651d; @synthesize=mSupportsAccumulation
@property(assign) double timeIn;	// G=0x314f6495; S=0x314f64ad; @synthesize=mTimeIn
@property(readonly, assign) double timeStamp;	// G=0x314f6505; @synthesize=mTimeStamp
@property(readonly, assign) NSString *uuid;	// G=0x314f6475; @synthesize=mUUID
- (id)initWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;	// 0x314f3089
// declared property getter: - (BOOL)_isNative3D;	// 0x314f653d
- (void)_observePlug;	// 0x314f6691
- (void)_observePlugOnPreactivate;	// 0x314f6799
- (void)_queueLayerCommand:(int)command object:(id)object;	// 0x314f6549
- (void)_renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x314f6541
- (id)_retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x314f6545
- (void)_setNeedsToRequestRebuildAudio:(BOOL)requestRebuildAudio;	// 0x314f6a7d
- (void)_setScissorRectOnContext:(id)context saveTo:(int *)to;	// 0x314f4805
- (void)_unobservePlug;	// 0x314f672d
- (void)_unobservePlugOnDepreactivate;	// 0x314f6941
- (void)_updateStateWithContext:(id)context;	// 0x314f61c9
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x314f5869
- (void)activate;	// 0x314f4265
- (void)cancelLoading;	// 0x314f4705
- (void)cleanup;	// 0x314f34f5
// declared property getter: - (id)clock;	// 0x314f3f3d
- (CGPoint)convertLocalPoint:(CGPoint)point;	// 0x314f5809
- (void)deactivate;	// 0x314f42f9
- (void)dealloc;	// 0x314f3475
- (void)depreactivate:(BOOL)depreactivate;	// 0x314f44c9
- (double)doAnimationTrigger:(id)trigger;	// 0x314f586d
- (double)doGenericAction:(id)action;	// 0x314f5b85
- (void)finalize;	// 0x314f34b5
- (BOOL)hasAudio;	// 0x314f5805
- (BOOL)hasSomethingToRender;	// 0x314f412d
// declared property getter: - (BOOL)isActivated;	// 0x314f64c5
- (BOOL)isActivatedAtTime:(double)time;	// 0x314f4639
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x314f4765
- (BOOL)isFlatAndSquare;	// 0x314f4769
// declared property getter: - (BOOL)isInfinite;	// 0x314f4761
- (BOOL)isLoadedForTime:(double)time;	// 0x314f4689
// declared property getter: - (BOOL)isNative3D;	// 0x314f4709
// declared property getter: - (BOOL)isOpaque;	// 0x314f475d
// declared property getter: - (BOOL)isPreactivated;	// 0x314f64d5
- (BOOL)isPreactivatedAtTime:(double)time;	// 0x314f45d5
// declared property getter: - (BOOL)isScheduledForDestruction;	// 0x314f652d
// declared property getter: - (BOOL)isSelected;	// 0x314f64e5
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x314f46fd
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x314f3821
// declared property getter: - (id)parameters;	// 0x314f6485
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x314f562d
// declared property getter: - (CGSize)pixelSize;	// 0x314f645d
// declared property getter: - (id)plug;	// 0x314f641d
// declared property getter: - (id)plugAsHaven;	// 0x314f644d
// declared property getter: - (id)plugAsParallel;	// 0x314f643d
// declared property getter: - (id)plugAsSerial;	// 0x314f642d
- (void)preactivate;	// 0x314f4195
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x314f4a61
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x314f4ce5
- (void)resumeOrPause:(BOOL)pause;	// 0x314f418d
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x314f5281
- (void)scheduleForDestruction;	// 0x314f57c1
// declared property setter: - (void)setIsSelected:(BOOL)selected;	// 0x314f64f5
- (void)setNeedsUpdateForPluggerOfSublayer:(id)sublayer;	// 0x314f3f39
// declared property setter: - (void)setPixelSize:(CGSize)size;	// 0x314f3f5d
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x314f64ad
- (void)stampTime;	// 0x314f5769
// declared property getter: - (XXStruct_vRz5EC *)state;	// 0x314f3f4d
- (id)sublayerForPrecomputingWithPlug:(id)plug;	// 0x314f3ce1
- (id)sublayerWithPlug:(id)plug;	// 0x314f3afd
// declared property getter: - (id)superlayer;	// 0x314f640d
// declared property getter: - (BOOL)supportsAccumulation;	// 0x314f651d
- (void)synchronizeTime;	// 0x314f4191
// declared property getter: - (double)timeIn;	// 0x314f6495
// declared property getter: - (double)timeStamp;	// 0x314f6505
- (void)unload;	// 0x314f4701
- (void)updateGeometry;	// 0x314f3fd5
// declared property getter: - (id)uuid;	// 0x314f6475
@end

