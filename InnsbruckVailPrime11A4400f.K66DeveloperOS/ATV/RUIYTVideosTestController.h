/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTDocumentLoaderDelegate.h"
#import "RUIYTVideoPlaybackAspectDelegate.h"
#import "BRViewController.h"

@class NSString, RUIYTDocumentLoader, NSDictionary, RUIYTVideoPlaybackAspect, RUIYTVideosDocumentSpec;
@protocol BRApplicationTestingDelegate;

__attribute__((visibility("hidden")))
@interface RUIYTVideosTestController : BRViewController <RUIYTDocumentLoaderDelegate, RUIYTVideoPlaybackAspectDelegate> {
	RUIYTDocumentLoader *_documentLoader;	// 104 = 0x68
	RUIYTVideosDocumentSpec *_spec;	// 108 = 0x6c
	RUIYTVideoPlaybackAspect *_videoPlaybackAspect;	// 112 = 0x70
	id<BRApplicationTestingDelegate> _delegate;	// 116 = 0x74
	NSString *_test;	// 120 = 0x78
	NSDictionary *_testOptions;	// 124 = 0x7c
}
@property(assign) __weak id<BRApplicationTestingDelegate> delegate;	// G=0x256481; S=0x2564a1; @synthesize=_delegate
@property(readonly, assign) NSString *test;	// G=0x2564b5; @synthesize=_test
@property(readonly, assign) NSDictionary *testOptions;	// G=0x2564c9; @synthesize=_testOptions
+ (id)controllerWithSpec:(id)spec test:(id)test options:(id)options;	// 0x255b89
- (id)initWithSpec:(id)spec test:(id)test options:(id)options;	// 0x255bfd
- (void).cxx_destruct;	// 0x2564dd
- (void)_loadItem;	// 0x2563f1
- (void)dealloc;	// 0x255d09
// declared property getter: - (id)delegate;	// 0x256481
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x255e59
- (id)identifier;	// 0x255d69
- (void)playbackWillEndForVideoPlaybackAspect:(id)playback error:(id)error;	// 0x256275
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2564a1
// declared property getter: - (id)test;	// 0x2564b5
// declared property getter: - (id)testOptions;	// 0x2564c9
- (void)wasPushed;	// 0x255d89
@end
