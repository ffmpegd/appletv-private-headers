/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <CAEAGLLayer.h> // Unknown library
#import "ATVSlideshow-Structs.h"
#import "MRMarimbaPlayback.h"
#import "MRMarimbaHitBlobSupport.h"
#import "MRMarimbaBasicPlayback.h"

@class MPDocument, MRRenderer, EAGLContext, MPFaceDetector;

@interface MRMarimbaLayer : CAEAGLLayer <MRMarimbaHitBlobSupport, MRMarimbaPlayback, MRMarimbaBasicPlayback> {
@private
	MRRenderer *_renderer;	// 52 = 0x34
	MPDocument *_document;	// 56 = 0x38
	BOOL _masterClockIsSet;	// 60 = 0x3c
	BOOL _bailTimeWatcher;	// 61 = 0x3d
	BOOL _stopWithVideo;	// 62 = 0x3e
	BOOL _readOnly;	// 63 = 0x3f
	MPFaceDetector *_faceDetector;	// 64 = 0x40
	EAGLContext *_context;	// 68 = 0x44
	unsigned _viewRenderbuffer;	// 72 = 0x48
	unsigned _viewFramebuffer;	// 76 = 0x4c
}
@property(assign) BOOL bailTimeWatcher;	// G=0x3437c11d; S=0x3437c12d; converted property
@property(assign, nonatomic) BOOL displaysFPS;	// G=0x3437b021; S=0x3437b045; 
@property(retain, nonatomic) MPDocument *document;	// G=0x3437a641; S=0x3437a815; 
@property(readonly, assign) BOOL isPlaying;	// G=0x3437ae55; 
@property(readonly, assign) MRRenderer *renderer;	// G=0x3437b3b5; 
@property(readonly, assign) CGSize size;	// G=0x3437a7dd; 
@property(assign, nonatomic) BOOL stopWithVideo;	// G=0x3437af71; S=0x3437af81; 
@property(assign, nonatomic) double time;	// G=0x3437b065; S=0x3437b085; 
@property(readonly, assign) double timeRemaining;	// G=0x3437b0c9; 
@property(assign, nonatomic) float volume;	// G=0x3437b129; S=0x3437b149; 
+ (id)layerWithDocument:(id)document size:(CGSize)size;	// 0x3437a181
+ (void)releaseResources;	// 0x3437a1f5
- (id)init;	// 0x3437a329
- (id)_currentEffectContainer;	// 0x343772d5
- (id)_effectContainerForTime:(double)time;	// 0x34377a89
- (id)_firstEffectContainer;	// 0x343779dd
- (int)_mainLayerIndex;	// 0x34377bb1
- (void)_warmupRendererThreaded:(id)threaded;	// 0x3437b4a5
- (void)aspectRatioChangedTo:(id)to;	// 0x3437bf3d
// converted property getter: - (BOOL)bailTimeWatcher;	// 0x3437c11d
- (void)beginGesture:(id)gesture;	// 0x34379989
- (BOOL)beginLiveUpdateForHitBlob:(id)hitBlob;	// 0x3437978d
- (id)blobHitAtPoint:(CGPoint)point fromObjectsForObjectIDs:(id)objectIDs localPoint:(CGPoint *)point3;	// 0x34379271
- (void)callbackThread:(id)thread;	// 0x34377c65
- (void)cancelGesture:(id)gesture;	// 0x3437a0d1
- (void)cleanup;	// 0x3437a599
- (CGPoint)convertPoint:(CGPoint)point toHitBlob:(id)hitBlob;	// 0x343796b1
- (id)currentSlide;	// 0x34377fdd
- (id)currentSlides;	// 0x34377e2d
- (void)dealloc;	// 0x3437a491
- (void)destroyFramebuffer;	// 0x3437c13d
- (void)didAddEffects:(id)effects;	// 0x3437bec9
- (void)didApplyStyle:(id)style;	// 0x3437bd39
- (void)didLiveChanged:(id)changed;	// 0x3437adb9
- (id)displayedEffectContainers;	// 0x343768e9
// declared property getter: - (BOOL)displaysFPS;	// 0x3437b021
- (void)doGesture:(id)gesture;	// 0x34379d51
// declared property getter: - (id)document;	// 0x3437a641
- (void)endGesture:(id)gesture;	// 0x3437a081
- (BOOL)endLiveUpdateForHitBlob:(id)hitBlob;	// 0x3437988d
- (BOOL)getOnScreenVertices:(CGPoint [4])vertices forHitBlob:(id)hitBlob;	// 0x34379479
- (void)goBack;	// 0x3437b1a1
- (void)goForth;	// 0x3437b1c1
- (void)gotoBeginning;	// 0x3437b299
- (void)gotoEnd;	// 0x3437b1e1
- (void)gotoNextSlide;	// 0x34378395
- (void)gotoPreviousSlide;	// 0x343789bd
- (void)gotoSlide:(id)slide;	// 0x34378f41
- (void)hitStartAt:(CGPoint)at hitCount:(int)count withModifiers:(unsigned)modifiers;	// 0x3437c00d
- (BOOL)isInTransition;	// 0x34377499
// declared property getter: - (BOOL)isPlaying;	// 0x3437ae55
- (void)lockRendering;	// 0x3437b519
- (void)moveToEffectContainer:(id)effectContainer withStartOffset:(double)startOffset toStopOffset:(double)stopOffset blocking:(BOOL)blocking;	// 0x3437694d
- (void)moveToNextEffectContainer;	// 0x34376b51
- (void)moveToPreviousEffectContainer;	// 0x34376c2d
- (void)moveToSubtitleForSlide:(id)slide;	// 0x34376ff1
- (void)moveToTitleSlide;	// 0x34376d05
- (BOOL)nearingEndForEffect:(id)effect requestedNumberOfSlides:(unsigned)slides firstSlideIndexStillNeeded:(unsigned)needed;	// 0x3437b905
- (BOOL)nearingEndForEffectAfterDelay:(id)effectAfterDelay;	// 0x3437bc19
- (BOOL)nearingEndForSerializer:(id)serializer;	// 0x3437b559
- (BOOL)nearingEndForSerializerAfterDelay:(id)serializerAfterDelay;	// 0x3437b805
- (void)nextFrame;	// 0x3437b2e5
- (void)pause;	// 0x3437af35
- (void)play;	// 0x3437ae79
- (void)prevFrame;	// 0x3437b34d
- (double)relativeTime;	// 0x34376791
- (double)relativeTimeForBackgroundAudio;	// 0x343767e1
- (double)relativeTimeForLayer:(id)layer;	// 0x34376841
- (void)removeEffectContainersBeforeTime:(double)time;	// 0x34378191
- (void)removeFadeIn;	// 0x3437911d
// declared property getter: - (id)renderer;	// 0x3437b3b5
- (void)requestRendering:(BOOL)rendering;	// 0x3437b3c5
- (void)setAsynchronous:(BOOL)asynchronous;	// 0x3437a651
// converted property setter: - (void)setBailTimeWatcher:(BOOL)watcher;	// 0x3437c12d
- (void)setBounds:(CGRect)bounds;	// 0x3437a6c1
// declared property setter: - (void)setDisplaysFPS:(BOOL)fps;	// 0x3437b045
// declared property setter: - (void)setDocument:(id)document;	// 0x3437a815
- (void)setFrame:(CGRect)frame;	// 0x3437a655
- (void)setReadOnly:(BOOL)only;	// 0x3437c10d
// declared property setter: - (void)setStopWithVideo:(BOOL)video;	// 0x3437af81
- (void)setSuspended:(BOOL)suspended;	// 0x3437b169
// declared property setter: - (void)setTime:(double)time;	// 0x3437b085
// declared property setter: - (void)setVolume:(float)volume;	// 0x3437b149
// declared property getter: - (CGSize)size;	// 0x3437a7dd
- (CGImageRef)snapshotAsCGImage;	// 0x3437bfed
- (CGImageRef)snapshotAsCGImageForTime:(double)time withSize:(CGSize)size;	// 0x3437bf41
// declared property getter: - (BOOL)stopWithVideo;	// 0x3437af71
- (void)swipeAt:(CGPoint)at inDirection:(unsigned)direction withModifiers:(unsigned)modifiers;	// 0x3437c08d
// declared property getter: - (double)time;	// 0x3437b065
// declared property getter: - (double)timeRemaining;	// 0x3437b0c9
- (void)togglePlayback;	// 0x3437ae09
- (void)unlockRendering;	// 0x3437b539
- (BOOL)updateFramebuffer;	// 0x3437c219
// declared property getter: - (float)volume;	// 0x3437b129
- (void)warmupRenderer;	// 0x3437b3e5
- (void)watcherThread:(id)thread;	// 0x34377d4d
- (void)whenTransitionIsFinishedSendAction:(SEL)action toTarget:(id)target;	// 0x343776ad
@end

