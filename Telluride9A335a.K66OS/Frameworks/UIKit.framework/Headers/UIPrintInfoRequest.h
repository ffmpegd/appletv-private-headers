/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class PKPrinter;

__attribute__((visibility("hidden")))
@interface UIPrintInfoRequest : NSObject {
@private
	PKPrinter *_printer;	// 4 = 0x4
	int _requestState;	// 8 = 0x8
	id _completionHandler;	// 12 = 0xc
}
@property(copy, nonatomic) id completionHandler;	// G=0x33cce8c9; S=0x33cce8d9; @synthesize=_completionHandler
@property(assign, nonatomic) int requestState;	// G=0x33cce8a9; S=0x33cce8b9; @synthesize=_requestState
+ (id)requestInfoForPrinter:(id)printer;	// 0x33cce645
// declared property getter: - (id)completionHandler;	// 0x33cce8c9
- (void)dealloc;	// 0x33cce6d5
- (void)requestPrintInfo;	// 0x33cce735
// declared property getter: - (int)requestState;	// 0x33cce8a9
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x33cce8d9
// declared property setter: - (void)setRequestState:(int)state;	// 0x33cce8b9
@end

