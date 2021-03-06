/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"
#import "AVAssetWriterFinishWritingHelperDelegate.h"


@interface AVAssetWriterDoNothingFinishWritingDelegate : NSObject <AVAssetWriterFinishWritingHelperDelegate> {
	id _handler;	// 4 = 0x4
	int _handlerCalled;	// 8 = 0x8
}
- (id)initWithHandler:(id)handler;	// 0x302dfdd1
- (void)_callHandlerIfNotCalled;	// 0x302dfee9
- (void)dealloc;	// 0x302dfe39
- (void)finishWritingHelper:(id)helper didInitiateFinishWritingForFigAssetWriter:(OpaqueFigAssetWriter *)figAssetWriter;	// 0x302dfe85
- (void)finishWritingHelperDidCancelFinishWriting:(id)finishWritingHelper;	// 0x302dfec9
- (void)finishWritingHelperDidFail:(id)finishWritingHelper;	// 0x302dfed9
- (BOOL)shouldHelperPrepareInputs;	// 0x302dff25
@end

