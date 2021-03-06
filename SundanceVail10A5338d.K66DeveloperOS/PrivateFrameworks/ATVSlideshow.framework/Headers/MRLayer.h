/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library
#import "MRLoadable.h"
#import "MRRenderable.h"

@class NSDictionary, MRAudioPlayer, NSString, NSMutableDictionary, MCPlug, NSMutableArray, MCPlugHaven, MCPlugParallel, MCPlugSerial, MRRenderer, MRLayerClock;

@interface MRLayer : NSObject <MRLoadable, MRRenderable> {
	MRLayer *mSuperlayer;	// 4 = 0x4
	MCPlug *mPlug;	// 8 = 0x8
	MCPlugSerial *mPlugAsSerial;	// 12 = 0xc
	MCPlugParallel *mPlugAsParallel;	// 16 = 0x10
	MCPlugHaven *mPlugAsHaven;	// 20 = 0x14
	NSString *mUUID;	// 24 = 0x18
	NSString *mIDInSupercontainer;	// 28 = 0x1c
	unsigned mIndex;	// 32 = 0x20
	CGSize mPixelSize;	// 36 = 0x24
	double mTimeStamp;	// 44 = 0x2c
	double mTimeIn;	// 52 = 0x34
	MRLayerClock *mClock;	// 60 = 0x3c
	MRLayerRenderingStateOpaque *mRenderingState;	// 64 = 0x40
	NSMutableDictionary *mAnimationTriggers;	// 68 = 0x44
	NSMutableDictionary *mMotions;	// 72 = 0x48
	NSMutableDictionary *mPersistentState;	// 76 = 0x4c
	NSMutableArray *mLayerCommandQueue;	// 80 = 0x50
	NSDictionary *mParameters;	// 84 = 0x54
	MRRenderer *mRenderer;	// 88 = 0x58
	MRAudioPlayer *mAudioPlayer;	// 92 = 0x5c
	id mParentHelper;	// 96 = 0x60
	BOOL mIsPreactivated;	// 100 = 0x64
	BOOL mIsActivated;	// 101 = 0x65
	BOOL mOkToDeferKenBurns;	// 102 = 0x66
	BOOL mIsPrecomputing;	// 103 = 0x67
	BOOL mIsReadonly;	// 104 = 0x68
	BOOL mDoAudio;	// 105 = 0x69
	BOOL mIsSelected;	// 106 = 0x6a
	BOOL mIsDimmed;	// 107 = 0x6b
	BOOL mNeedsRendering;	// 108 = 0x6c
	BOOL mNeedsToUpdateGeometry;	// 109 = 0x6d
	BOOL mNeedsToUpdateInitialState;	// 110 = 0x6e
	BOOL mNeedsToRequestRebuildAudio;	// 111 = 0x6f
	BOOL mNeedsToRequestRebuildVolume;	// 112 = 0x70
	BOOL mNeedsToSynchronizeTime;	// 113 = 0x71
	BOOL mLayerCommandQueueNeedsAttention;	// 114 = 0x72
	BOOL mIsScheduledForDestruction;	// 115 = 0x73
	BOOL mSupportsAccumulation;	// 116 = 0x74
}
@property(readonly, assign, nonatomic) BOOL _isNative3D;	// G=0x334696d5; 
@property(readonly, assign) NSDictionary *animationTriggers;	// G=0x33469611; @synthesize=mAnimationTriggers
@property(readonly, assign) MRLayerClock *clock;	// G=0x3346531d; 
@property(assign, nonatomic) double duration;	// G=0x33465699; S=0x334656fd; 
@property(readonly, assign, nonatomic) BOOL hasAudio;	// G=0x33467495; 
@property(readonly, assign) NSString *idInSupercontainer;	// G=0x33469671; @synthesize=mIDInSupercontainer
@property(readonly, assign, nonatomic) unsigned index;	// G=0x33469685; @synthesize=mIndex
@property(readonly, assign, nonatomic) BOOL isActivated;	// G=0x33469575; @synthesize=mIsActivated
@property(readonly, assign, nonatomic) BOOL isAlphaFriendly;	// G=0x33465c51; 
@property(assign, nonatomic) BOOL isDimmed;	// G=0x334695b5; S=0x3346946d; @synthesize=mIsDimmed
@property(readonly, assign, nonatomic) BOOL isInfinite;	// G=0x33465c4d; 
@property(readonly, assign, nonatomic) BOOL isNative3D;	// G=0x33465c0d; 
@property(readonly, assign, nonatomic) BOOL isOpaque;	// G=0x33465c49; 
@property(readonly, assign, nonatomic) BOOL isPreactivated;	// G=0x33469585; @synthesize=mIsPreactivated
@property(readonly, assign, nonatomic) BOOL isScheduledForDestruction;	// G=0x334695ed; @synthesize=mIsScheduledForDestruction
@property(assign, nonatomic) BOOL isSelected;	// G=0x33469595; S=0x334695a5; @synthesize=mIsSelected
@property(readonly, assign) NSMutableDictionary *motions;	// G=0x33469625; @synthesize=mMotions
@property(assign, nonatomic) BOOL needsToSynchronizeTime;	// G=0x33469695; S=0x334696a5; @synthesize=mNeedsToSynchronizeTime
@property(assign, nonatomic) BOOL needsToUpdateGeometry;	// G=0x334696b5; S=0x334696c5; @synthesize=mNeedsToUpdateGeometry
@property(readonly, assign) NSDictionary *parameters;	// G=0x33469535; @synthesize=mParameters
@property(retain) id parentHelper;	// G=0x33469639; S=0x3346964d; @synthesize=mParentHelper
@property(readonly, assign) NSDictionary *persistentState;	// G=0x334695fd; @synthesize=mPersistentState
@property(assign, nonatomic) CGSize pixelSize;	// G=0x33469509; S=0x3346533d; @synthesize=mPixelSize
@property(readonly, assign) MCPlug *plug;	// G=0x334694b9; @synthesize=mPlug
@property(readonly, assign) MCPlugHaven *plugAsHaven;	// G=0x334694f5; @synthesize=mPlugAsHaven
@property(readonly, assign) MCPlugParallel *plugAsParallel;	// G=0x334694e1; @synthesize=mPlugAsParallel
@property(readonly, assign) MCPlugSerial *plugAsSerial;	// G=0x334694cd; @synthesize=mPlugAsSerial
@property(readonly, assign) MRLayerRenderingStateOpaque *renderingState;	// G=0x3346532d; 
@property(readonly, assign) MRLayer *superlayer;	// G=0x334694a5; @synthesize=mSuperlayer
@property(readonly, assign, nonatomic) BOOL supportsAccumulation;	// G=0x334695dd; @synthesize=mSupportsAccumulation
@property(readonly, assign, nonatomic) BOOL supportsDynamicExpansion;	// G=0x334673e1; 
@property(assign, nonatomic) double timeIn;	// G=0x33469549; S=0x33469561; @synthesize=mTimeIn
@property(readonly, assign, nonatomic) double timeStamp;	// G=0x334695c5; @synthesize=mTimeStamp
@property(readonly, assign) NSString *uuid;	// G=0x33469521; @synthesize=mUUID
- (id)initWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;	// 0x33464501
- (id)__retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33466729
- (void)_applyState:(id)state;	// 0x33467625
- (id)_currentState;	// 0x33469309
- (id)_dumpLayerWithOptions:(unsigned)options;	// 0x3346935d
// declared property getter: - (BOOL)_isNative3D;	// 0x334696d5
- (void)_observePlug;	// 0x33469809
- (void)_observePlugOnPreactivate;	// 0x33469919
- (void)_queueLayerCommand:(int)command object:(id)object;	// 0x334696e1
- (void)_rebuildAudio;	// 0x33468e81
- (void)_renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x334696d9
- (id)_retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x334696dd
- (void)_sendAction:(id)action withStates:(id)states async:(BOOL)async yesterday:(BOOL)yesterday;	// 0x33468c31
- (void)_setNeedsToRequestRebuildAudio:(BOOL)requestRebuildAudio;	// 0x33469ab9
- (void)_setScissorRectOnContext:(id)context saveTo:(int *)to;	// 0x33465cf9
- (BOOL)_setStateValue:(id)value forKey:(id)key;	// 0x33468db1
- (void)_unobservePlug;	// 0x334698a9
- (void)_unobservePlugOnDepreactivate;	// 0x33469a05
- (void)_updateStateWithContext:(id)context;	// 0x33468a29
- (id)actionForKey:(id)key recursive:(BOOL)recursive;	// 0x33467759
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x33467755
- (void)activate;	// 0x33465815
// declared property getter: - (id)animationTriggers;	// 0x33469611
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x33465691
- (void)cancelLoading;	// 0x33465c09
- (void)cleanup;	// 0x33464a5d
// declared property getter: - (id)clock;	// 0x3346531d
- (CGPoint)convertGlobalPoint:(CGPoint)point;	// 0x33467561
- (CGPoint)convertLocalPoint:(CGPoint)point;	// 0x33467499
- (void)deactivate;	// 0x33465925
- (void)dealloc;	// 0x334649dd
- (void)depreactivate:(BOOL)depreactivate;	// 0x33465a49
- (double)doActionTrigger:(id)trigger;	// 0x33467b79
- (double)doAnimationTrigger:(id)trigger;	// 0x33467791
- (double)doGenericAction:(id)action;	// 0x334682c9
- (double)doMotionTrigger:(id)trigger;	// 0x33467f8d
- (double)doStateOperation:(id)operation;	// 0x33467c59
// declared property getter: - (double)duration;	// 0x33465699
- (void)endMorphing;	// 0x33465695
- (void)finalize;	// 0x33464a1d
// declared property getter: - (BOOL)hasAudio;	// 0x33467495
- (BOOL)hasSomethingToRender;	// 0x3346557d
// declared property getter: - (id)idInSupercontainer;	// 0x33469671
// declared property getter: - (unsigned)index;	// 0x33469685
// declared property getter: - (BOOL)isActivated;	// 0x33469575
- (BOOL)isActivatedAtTime:(double)time;	// 0x33465bb1
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x33465c51
// declared property getter: - (BOOL)isDimmed;	// 0x334695b5
- (BOOL)isFlatAndSquare;	// 0x33465c55
// declared property getter: - (BOOL)isInfinite;	// 0x33465c4d
- (BOOL)isLoadedForTime:(double)time;	// 0x33465bf1
// declared property getter: - (BOOL)isNative3D;	// 0x33465c0d
// declared property getter: - (BOOL)isOpaque;	// 0x33465c49
// declared property getter: - (BOOL)isPreactivated;	// 0x33469585
- (BOOL)isPreactivatedAtTime:(double)time;	// 0x33465b59
// declared property getter: - (BOOL)isScheduledForDestruction;	// 0x334695ed
// declared property getter: - (BOOL)isSelected;	// 0x33469595
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x33465c01
// declared property getter: - (id)motions;	// 0x33469625
// declared property getter: - (BOOL)needsToSynchronizeTime;	// 0x33469695
// declared property getter: - (BOOL)needsToUpdateGeometry;	// 0x334696b5
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x33464d09
// declared property getter: - (id)parameters;	// 0x33469535
// declared property getter: - (id)parentHelper;	// 0x33469639
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33467279
// declared property getter: - (id)persistentState;	// 0x334695fd
// declared property getter: - (CGSize)pixelSize;	// 0x33469509
// declared property getter: - (id)plug;	// 0x334694b9
// declared property getter: - (id)plugAsHaven;	// 0x334694f5
// declared property getter: - (id)plugAsParallel;	// 0x334694e1
// declared property getter: - (id)plugAsSerial;	// 0x334694cd
- (void)preactivate;	// 0x3346573d
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33465f81
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33466965
// declared property getter: - (MRLayerRenderingStateOpaque *)renderingState;	// 0x3346532d
- (void)resumeOrPause:(BOOL)pause;	// 0x334655fd
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x334670e9
- (void)scheduleForDestruction;	// 0x33467449
// declared property setter: - (void)setDuration:(double)duration;	// 0x334656fd
// declared property setter: - (void)setIsDimmed:(BOOL)dimmed;	// 0x3346946d
// declared property setter: - (void)setIsSelected:(BOOL)selected;	// 0x334695a5
// declared property setter: - (void)setNeedsToSynchronizeTime:(BOOL)synchronizeTime;	// 0x334696a5
// declared property setter: - (void)setNeedsToUpdateGeometry:(BOOL)updateGeometry;	// 0x334696c5
- (void)setNeedsUpdateForPluggerOfSublayer:(id)sublayer;	// 0x33465319
// declared property setter: - (void)setParentHelper:(id)helper;	// 0x3346964d
// declared property setter: - (void)setPixelSize:(CGSize)size;	// 0x3346533d
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x33469561
- (void)stampTime;	// 0x334673e5
- (id)sublayerForPrecomputingWithPlug:(id)plug;	// 0x33465115
- (id)sublayerWithPlug:(id)plug;	// 0x33464fcd
// declared property getter: - (id)superlayer;	// 0x334694a5
// declared property getter: - (BOOL)supportsAccumulation;	// 0x334695dd
// declared property getter: - (BOOL)supportsDynamicExpansion;	// 0x334673e1
- (void)synchronizeTime;	// 0x3346566d
// declared property getter: - (double)timeIn;	// 0x33469549
// declared property getter: - (double)timeStamp;	// 0x334695c5
- (void)unload;	// 0x33465c05
- (void)updateGeometry;	// 0x334653a5
// declared property getter: - (id)uuid;	// 0x33469521
@end

