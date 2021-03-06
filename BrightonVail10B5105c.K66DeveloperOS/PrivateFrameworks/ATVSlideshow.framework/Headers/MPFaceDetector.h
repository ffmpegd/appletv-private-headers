/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, NSTimer, NSOperationQueue, NSLock, MPDocument;
@protocol MRMarimbaPlayback;

@interface MPFaceDetector : NSObject {
	MPDocument *mDocument;	// 4 = 0x4
	NSObject<MRMarimbaPlayback> *mRenderer;	// 8 = 0x8
	NSOperationQueue *mDetectionQueue;	// 12 = 0xc
	BOOL mIsCancelled;	// 16 = 0x10
	NSMutableSet *mPathsInQueue;	// 20 = 0x14
	NSLock *mPathQueueLock;	// 24 = 0x18
	NSMutableSet *mPlayingSlides;	// 28 = 0x1c
	NSLock *mPlayingSlidesLock;	// 32 = 0x20
	NSLock *mStartStopLock;	// 36 = 0x24
	NSTimer *mCheckTimer;	// 40 = 0x28
}
@property(retain, nonatomic) MPDocument *document;	// G=0x3257f095; S=0x3257f0a5; @synthesize=mDocument
@property(assign, nonatomic) BOOL isCancelled;	// G=0x3257f0d5; S=0x3257f0e5; @synthesize=mIsCancelled
@property(retain, nonatomic) NSObject<MRMarimbaPlayback> *renderer;	// G=0x3257f0b5; S=0x3257f0c5; @synthesize=mRenderer
- (id)init;	// 0x3257e1f9
- (void)_addPathToQueue:(id)queue;	// 0x3257e505
- (void)_checkPlayingSlides;	// 0x3257ec59
- (BOOL)_pathIsInQueue:(id)queue;	// 0x3257e5fd
- (void)_removePathToQueue:(id)queue;	// 0x3257e561
- (void)_setupTimer;	// 0x3257ebe1
- (void)_start;	// 0x3257e661
- (void)checkPlayingSlides;	// 0x3257ecb9
- (void)dealloc;	// 0x3257e389
- (void)detectFaces:(id)faces;	// 0x3257e995
// declared property getter: - (id)document;	// 0x3257f095
// declared property getter: - (BOOL)isCancelled;	// 0x3257f0d5
// declared property getter: - (id)renderer;	// 0x3257f0b5
- (void)resume;	// 0x3257e951
// declared property setter: - (void)setDocument:(id)document;	// 0x3257f0a5
// declared property setter: - (void)setIsCancelled:(BOOL)cancelled;	// 0x3257f0e5
// declared property setter: - (void)setRenderer:(id)renderer;	// 0x3257f0c5
- (void)start;	// 0x3257e4b9
- (void)stop;	// 0x3257efa9
- (void)suspend;	// 0x3257e931
- (BOOL)suspended;	// 0x3257e971
@end

