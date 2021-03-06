/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
 */

#import </libobjc.A.h>

@class AXAccessQueue, NSMutableArray;
@protocol AXUIMessageSenderDelegate;

@interface AXUIMessageSender : NSObject {
	BOOL _sendingMessage;	// 4 = 0x4
	id<AXUIMessageSenderDelegate> _delegate;	// 8 = 0x8
	NSMutableArray *_messageQueue;	// 12 = 0xc
	AXAccessQueue *_messageSchedulingSerializationQueue;	// 16 = 0x10
}
@property(assign, nonatomic) id<AXUIMessageSenderDelegate> delegate;	// G=0x2fe1ff79; S=0x2fe1ff89; @synthesize=_delegate
@property(retain, nonatomic) NSMutableArray *messageQueue;	// G=0x2fe1ff99; S=0x2fe1ffa9; @synthesize=_messageQueue
@property(retain, nonatomic) AXAccessQueue *messageSchedulingSerializationQueue;	// G=0x2fe1ffb9; S=0x2fe1ffc9; @synthesize=_messageSchedulingSerializationQueue
@property(assign, nonatomic, getter=isSendingMessage) BOOL sendingMessage;	// G=0x2fe1ffd9; S=0x2fe1ffe9; @synthesize=_sendingMessage
- (id)init;	// 0x2fe1e921
- (void)_didFinishSendingXPCMessage:(id)message replyCustomData:(void *)data;	// 0x2fe1f159
- (void)_performBlock:(id)block inAccessQueue:(id)accessQueue treatAsWritingBlock:(BOOL)block3;	// 0x2fe1f68d
- (void)_sendXPCMessage:(id)message context:(void *)context remainingAttempts:(unsigned)attempts previousError:(id)error completion:(id)completion;	// 0x2fe1ea41
- (void)dealloc;	// 0x2fe1e9e9
// declared property getter: - (id)delegate;	// 0x2fe1ff79
// declared property getter: - (BOOL)isSendingMessage;	// 0x2fe1ffd9
// declared property getter: - (id)messageQueue;	// 0x2fe1ff99
// declared property getter: - (id)messageSchedulingSerializationQueue;	// 0x2fe1ffb9
- (void)sendAsynchronousMessage:(id)message withIdentifier:(unsigned)identifier context:(void *)context targetAccessQueue:(id)queue completionRequiresWritingBlock:(BOOL)block completion:(id)completion;	// 0x2fe1f6b9
- (id)sendSynchronousMessage:(id)message withIdentifier:(unsigned)identifier context:(void *)context error:(id *)error;	// 0x2fe1fca5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2fe1ff89
// declared property setter: - (void)setMessageQueue:(id)queue;	// 0x2fe1ffa9
// declared property setter: - (void)setMessageSchedulingSerializationQueue:(id)queue;	// 0x2fe1ffc9
// declared property setter: - (void)setSendingMessage:(BOOL)message;	// 0x2fe1ffe9
@end

