/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class MRLayerParallelizer, MRContext, NSDictionary, CADisplayLink, MRRendererInternal, MCMontage;
@protocol MRLiveSlideshowDelegate, MRAsynchronousOperationsDelegate, MZMediaManagement, MRRenderingDelegate, MREditingDelegate, MRFeatureDelegate;

@interface MRRenderer : NSObject {
	MCMontage *mMontage;	// 4 = 0x4
	MRLayerParallelizer *mTopMRLayer;	// 8 = 0x8
	float mVolume;	// 12 = 0xc
	CGSize mSize;	// 16 = 0x10
	double mTimeQuantum;	// 24 = 0x18
	CADisplayLink *mDisplayLink;	// 32 = 0x20
	double mDisplayLinkTimestamp;	// 36 = 0x24
	BOOL mIsCleanedUp;	// 44 = 0x2c
	BOOL mIsPlaying;	// 45 = 0x2d
	BOOL mPushRendering;	// 46 = 0x2e
	int mMode;	// 48 = 0x30
	BOOL mDisplaysFPS;	// 52 = 0x34
	BOOL mIsEditing;	// 53 = 0x35
	NSDictionary *mParameters;	// 56 = 0x38
	MRRendererInternal *mInternal;	// 60 = 0x3c
	id<MZMediaManagement> mAssetManagementDelegate;	// 64 = 0x40
	id<MRRenderingDelegate> mRenderingDelegate;	// 68 = 0x44
	id<MREditingDelegate> mEditingDelegate;	// 72 = 0x48
	id<MRFeatureDelegate> mFeatureDelegate;	// 76 = 0x4c
	NSDictionary *mDescriptionsForRandomTransitionPresetIDs;	// 80 = 0x50
@private
	BOOL _asynchronousOperationsAreSuspended;	// 84 = 0x54
}
@property(retain, nonatomic) id<MZMediaManagement> assetManagementDelegate;	// G=0x34383ee9; S=0x34382639; @synthesize=mAssetManagementDelegate
@property(assign, setter=suspendAsynchronousOperations:) BOOL asynchronousOperationsAreSuspended;	// G=0x34384039; S=0x34384049; @synthesize=_asynchronousOperationsAreSuspended
@property(retain) id<MRAsynchronousOperationsDelegate> asynchronousOperationsDelegate;	// G=0x34387b41; S=0x34387b61; 
@property(readonly, assign) MRContext *context;	// G=0x34386815; 
@property(assign, nonatomic) BOOL displaysFPS;	// G=0x34383ed9; S=0x343826ad; @synthesize=mDisplaysFPS
@property(assign) BOOL dontShowDRMUI;	// G=0x34386835; S=0x34386855; 
@property(retain) id<MREditingDelegate> editingDelegate;	// G=0x34383f69; S=0x34383f7d; @synthesize=mEditingDelegate
@property(retain) id<MRFeatureDelegate> featureDelegate;	// G=0x34383ef9; S=0x34383f0d; @synthesize=mFeatureDelegate
@property(assign) BOOL isEditing;	// G=0x34383e89; S=0x34383e99; @synthesize=mIsEditing
@property(readonly, assign) BOOL isFlipped;	// G=0x34386959; 
@property(readonly, assign) BOOL isOffscreen;	// G=0x34382621; 
@property(readonly, assign) BOOL isPlaying;	// G=0x34383ea9; @synthesize=mIsPlaying
@property(retain) id<MRLiveSlideshowDelegate> liveSlideshowDelegate;	// G=0x34387afd; S=0x34387b1d; 
@property(assign) double masterClock;	// G=0x34386875; S=0x343868cd; 
@property(assign, nonatomic) int mode;	// G=0x34383e79; S=0x34382525; @synthesize=mMode
@property(retain, nonatomic) MCMontage *montage;	// G=0x34383e4d; S=0x3437f711; @synthesize=mMontage
@property(readonly, assign) NSDictionary *parameters;	// G=0x34384029; @synthesize=mParameters
@property(assign) BOOL pushRendering;	// G=0x34383eb9; S=0x34383ec9; @synthesize=mPushRendering
@property(retain) id<MRRenderingDelegate> renderingDelegate;	// G=0x34383f31; S=0x34383f45; @synthesize=mRenderingDelegate
@property(assign) BOOL screenBurnTest;	// G=0x34387b85; S=0x34387ba5; 
@property(assign, nonatomic) CGSize size;	// G=0x34383e5d; S=0x34382369; @synthesize=mSize
@property(assign) BOOL slaveFrameMode;	// G=0x3437faa9; S=0x3437fac9; 
@property(assign) double time;	// G=0x34382165; S=0x343822fd; 
@property(assign) double timeQuantum;	// G=0x34383fc1; S=0x34383ff5; @synthesize=mTimeQuantum
@property(assign) float volume;	// G=0x34383fa1; S=0x34383fb1; @synthesize=mVolume
+ (float)textScaleForResolution:(CGSize)resolution;	// 0x34385e29
- (id)init;	// 0x3437ef9d
- (id)initWithParameters:(id)parameters;	// 0x3437eb41
- (void)_displayFPS:(double)fps;	// 0x343842d9
- (double)_doAction:(id)action;	// 0x343826cd
- (void)_doActions;	// 0x34382fed
- (void)_doSnapshot;	// 0x343819c1
- (BOOL)_lockRendering;	// 0x3437f9e5
- (int)_maxLinesForCurrentEditingTextElement;	// 0x343867c5
- (CGSize)_maxSizeForCurrentEditingTextElement;	// 0x34386761
- (void)_nearingEndForEffect:(id)effect;	// 0x34383c29
- (void)_nearingEndForSerializer:(id)serializer;	// 0x34383b65
- (void)_render:(id)render;	// 0x34380429
- (void)_renderForScreenBurnTestAtTime:(double)time;	// 0x34381169
- (void)_renderThreadMain;	// 0x34380069
- (void)_sendNotificationMainThread:(id)thread;	// 0x34387cc1
- (void)_setTime:(double)time isResyncing:(BOOL)resyncing;	// 0x34384059
- (void)_startRenderTimer;	// 0x34380255
- (void)_stopRenderTimer;	// 0x34380305
- (double)_unalteredTime;	// 0x34384141
- (void)_undimAllLayersInLayer:(id)layer;	// 0x34386bf9
- (void)_unlockRendering;	// 0x3437fa7d
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x34385c59
- (void)addAudioPlayer:(id)player;	// 0x343864e9
- (void)addNavigatorToBackHistory:(id)backHistory;	// 0x34381e05
- (void)addNavigatorToForthHistory:(id)forthHistory;	// 0x34381e85
// declared property getter: - (id)assetManagementDelegate;	// 0x34383ee9
// declared property getter: - (BOOL)asynchronousOperationsAreSuspended;	// 0x34384039
// declared property getter: - (id)asynchronousOperationsDelegate;	// 0x34387b41
- (BOOL)beginTextEditingOfElement:(id)element inLayer:(id)layer callDelegate:(BOOL)delegate;	// 0x34385e41
- (BOOL)beginTextEditingOfElement:(id)element inPlug:(id)plug callDelegate:(BOOL)delegate;	// 0x34386089
- (BOOL)canGoBack;	// 0x34381d8d
- (BOOL)canGoForth;	// 0x34381dc9
- (id)chooseTransitionIDForRandomTransitionPresetID:(id)randomTransitionPresetID;	// 0x34387d2d
- (void)cleanup;	// 0x3437f079
// declared property getter: - (id)context;	// 0x34386815
- (CGImageRef)copyCGSnapshotAtTime:(double)time andSize:(CGSize)size;	// 0x34387919
- (CGImageRef)currentFrameAsCGImage;	// 0x34387941
- (void)dealloc;	// 0x3437efb1
- (void)deselectAllLayers;	// 0x34386aa1
- (void)deselectLayer:(id)layer;	// 0x343869fd
- (void)dimLayersExceptForPathTo:(id)to;	// 0x34386f89
// declared property getter: - (BOOL)displaysFPS;	// 0x34383ed9
- (void)doAction:(id)action;	// 0x34382ef1
// declared property getter: - (BOOL)dontShowDRMUI;	// 0x34386835
- (int)dragTo:(CGPoint)to withModifiers:(unsigned)modifiers;	// 0x34385641
- (void)dumpActiveHierarchy;	// 0x34383ae1
// declared property getter: - (id)editingDelegate;	// 0x34383f69
- (void)endTextEditing:(BOOL)editing;	// 0x34386185
// declared property getter: - (id)featureDelegate;	// 0x34383ef9
- (void)finalize;	// 0x3437f015
- (BOOL)getVerticesCoordinatesForCurrentlyEditedTextElement:(CGPoint (*)[4])currentlyEditedTextElement;	// 0x34385d61
- (void)goBack;	// 0x34381a6d
- (void)goForth;	// 0x34381bfd
- (void)gotoState:(id)state;	// 0x34383971
- (int)hitEndAt:(CGPoint)at withModifiers:(unsigned)modifiers;	// 0x34385671
- (int)hitStartAt:(CGPoint)at hitCount:(int)count withModifiers:(unsigned)modifiers;	// 0x34384885
// declared property getter: - (BOOL)isEditing;	// 0x34383e89
// declared property getter: - (BOOL)isFlipped;	// 0x34386959
- (BOOL)isHitting;	// 0x34385b2d
// declared property getter: - (BOOL)isOffscreen;	// 0x34382621
// declared property getter: - (BOOL)isPlaying;	// 0x34383ea9
- (id)layerForPlug:(id)plug;	// 0x34383825
- (id)layerForPlugObjectID:(id)plugObjectID;	// 0x34383865
- (id)layerHitAtPoint:(CGPoint)point onlyIfHitElement:(BOOL)element localPoint:(CGPoint *)point3;	// 0x34385b4d
- (id)layerHitAtPoint:(CGPoint)point onlyIfHitElement:(BOOL)element localPoint:(CGPoint *)point3 localTime:(double *)time;	// 0x343862a9
// declared property getter: - (id)liveSlideshowDelegate;	// 0x34387afd
- (void)lockRendering;	// 0x3437f9c5
// declared property getter: - (double)masterClock;	// 0x34386875
// declared property getter: - (int)mode;	// 0x34383e79
// declared property getter: - (id)montage;	// 0x34383e4d
- (unsigned)mouseDownAt:(CGPoint)at clickCount:(int)count withModifiers:(unsigned)modifiers;	// 0x34386299
- (void)moveNavigatorFromBackToForthHistory:(id)forthHistory;	// 0x34381f5d
- (void)moveNavigatorFromForthToBackHistory:(id)backHistory;	// 0x34382061
- (void)nearingEndForEffect:(id)effect requestedNumberOfSlides:(unsigned)slides firstSlideIndexStillNeeded:(unsigned)needed;	// 0x34383d19
- (void)nearingEndForSerializer:(id)serializer;	// 0x34383bd1
// declared property getter: - (id)parameters;	// 0x34384029
- (void)pause;	// 0x3437fae9
- (id)plugForCurrentSublayerInNavigatorForPlug:(id)plug;	// 0x34383885
- (void)processAudioPlayers;	// 0x343862e1
// declared property getter: - (BOOL)pushRendering;	// 0x34383eb9
- (void)removeAudioPlayer:(id)player;	// 0x343866b9
- (void)removeNavigatorFromBackHistory:(id)backHistory;	// 0x34381f05
- (void)removeNavigatorFromForthHistory:(id)forthHistory;	// 0x34381f31
- (void)render;	// 0x343862cd
// declared property getter: - (id)renderingDelegate;	// 0x34383f31
- (void)requestRendering:(BOOL)rendering;	// 0x3437fe11
- (BOOL)requestRenderingWithin:(double)within;	// 0x3437ffc1
- (void)resume;	// 0x3437fc8d
// declared property getter: - (BOOL)screenBurnTest;	// 0x34387b85
- (void)selectLayer:(id)layer;	// 0x3438699d
- (id)selectedLayers;	// 0x34386bd9
- (void)sendNotification:(id)notification;	// 0x34387cfd
// declared property setter: - (void)setAssetManagementDelegate:(id)delegate;	// 0x34382639
// declared property setter: - (void)setAsynchronousOperationsDelegate:(id)delegate;	// 0x34387b61
// declared property setter: - (void)setDisplaysFPS:(BOOL)fps;	// 0x343826ad
// declared property setter: - (void)setDontShowDRMUI:(BOOL)drmui;	// 0x34386855
- (void)setEAGLContext:(id)context;	// 0x3437f4e5
// declared property setter: - (void)setEditingDelegate:(id)delegate;	// 0x34383f7d
// declared property setter: - (void)setFeatureDelegate:(id)delegate;	// 0x34383f0d
- (void)setFreezeSizeOfImageRequests:(BOOL)imageRequests;	// 0x343868f5
// declared property setter: - (void)setIsEditing:(BOOL)editing;	// 0x34383e99
// declared property setter: - (void)setLiveSlideshowDelegate:(id)delegate;	// 0x34387b1d
// declared property setter: - (void)setMasterClock:(double)clock;	// 0x343868cd
- (void)setMasterStartTime:(double)time andDuration:(double)duration loop:(BOOL)loop;	// 0x34387a69
- (void)setMasterStartTime:(double)time andDuration:(double)duration mode:(int)mode;	// 0x34387aa1
// declared property setter: - (void)setMode:(int)mode;	// 0x34382525
// declared property setter: - (void)setMontage:(id)montage;	// 0x3437f711
// declared property setter: - (void)setPushRendering:(BOOL)rendering;	// 0x34383ec9
// declared property setter: - (void)setRenderingDelegate:(id)delegate;	// 0x34383f45
// declared property setter: - (void)setScreenBurnTest:(BOOL)test;	// 0x34387ba5
// declared property setter: - (void)setSize:(CGSize)size;	// 0x34382369
// declared property setter: - (void)setSlaveFrameMode:(BOOL)mode;	// 0x3437fac9
- (void)setTemporarySize:(CGSize)size;	// 0x34382465
// declared property setter: - (void)setTime:(double)time;	// 0x343822fd
// declared property setter: - (void)setTimeQuantum:(double)quantum;	// 0x34383ff5
- (void)setUseCGLFlushDrawableWorkaround:(BOOL)workaround;	// 0x34387cad
// declared property setter: - (void)setVolume:(float)volume;	// 0x34383fb1
// declared property getter: - (CGSize)size;	// 0x34383e5d
// declared property getter: - (BOOL)slaveFrameMode;	// 0x3437faa9
- (CGImageRef)snapshotAsCGImageForTime:(double)time andSize:(CGSize)size;	// 0x343874fd
- (id)snapshotOfStates:(id)states atSize:(CGSize)size;	// 0x34383a31
- (void)stall;	// 0x34383e11
- (void)stepBackward;	// 0x34381a19
- (void)stepForward;	// 0x343819c5
// declared property setter: - (void)suspendAsynchronousOperations:(BOOL)operations;	// 0x34384049
- (int)swipeAt:(CGPoint)at inDirection:(unsigned)direction withModifiers:(unsigned)modifiers;	// 0x34385425
// declared property getter: - (double)time;	// 0x34382165
// declared property getter: - (double)timeQuantum;	// 0x34383fc1
- (int)trackingAt:(CGPoint)at;	// 0x34384ad1
- (void)transitionToNextPlugInContainerOfPlug:(id)plug;	// 0x3438331d
- (void)transitionToPreviousPlugInContainerOfPlug:(id)plug;	// 0x343835a1
- (void)undimAllLayers;	// 0x34387499
- (void)unlockRendering;	// 0x3437f9d5
- (void)updateSelectionLayer;	// 0x34386999
// declared property getter: - (float)volume;	// 0x34383fa1
- (void)warmupAudio:(BOOL)audio;	// 0x34380065
@end

