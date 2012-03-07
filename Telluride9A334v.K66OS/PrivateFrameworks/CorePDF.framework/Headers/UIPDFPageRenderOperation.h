/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSOperation.h> // Unknown library

@class UIPDFPageRenderJob;

@interface UIPDFPageRenderOperation : NSOperation {
	UIPDFPageRenderJob *_job;	// 12 = 0xc
	BOOL executing;	// 16 = 0x10
	BOOL finished;	// 17 = 0x11
}
@property(readonly, assign, getter=isExecuting) BOOL executing;	// G=0x307ef77d; converted property
@property(readonly, assign, getter=isFinished) BOOL finished;	// G=0x307ef78d; converted property
- (id)initWithJob:(id)job;	// 0x307ef79d
- (void)completeOperation;	// 0x307ef7f5
- (void)dealloc;	// 0x307ef9f5
- (BOOL)isConcurrent;	// 0x307ef779
// converted property getter: - (BOOL)isExecuting;	// 0x307ef77d
// converted property getter: - (BOOL)isFinished;	// 0x307ef78d
- (void)main;	// 0x307ef879
- (void)start;	// 0x307ef939
@end

