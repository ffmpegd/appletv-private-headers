/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, FTMessage, NSArray;
@protocol FTMessageQueueDelegate;

@interface FTMessageQueue : NSObject {
	NSMutableArray *_queue;	// 4 = 0x4
	NSMutableArray *_addDates;	// 8 = 0x8
	double _timeoutTime;	// 12 = 0xc
	id<FTMessageQueueDelegate> _delegate;	// 20 = 0x14
}
@property(readonly, assign) int count;	// G=0x33fa7711; 
@property(assign) id<FTMessageQueueDelegate> delegate;	// G=0x33fa7379; S=0x33fa7389; @synthesize=_delegate
@property(assign) double messageTimeoutTime;	// G=0x33fa7885; S=0x33fa7859; @synthesize=_timeoutTime
@property(readonly, assign) NSArray *messages;	// G=0x33fa7369; 
@property(readonly, assign) FTMessage *topMessage;	// G=0x33fa7731; 
- (id)init;	// 0x33fa77cd
- (void)_clearTimeout;	// 0x33fa76d9
- (void)_setTimeout;	// 0x33fa7605
- (void)_timeoutHit;	// 0x33fa75c5
- (BOOL)addMessage:(id)message;	// 0x33fa7439
// declared property getter: - (int)count;	// 0x33fa7711
- (void)dealloc;	// 0x33fa7771
// declared property getter: - (id)delegate;	// 0x33fa7379
- (id)dequeueTopMessage;	// 0x33fa74bd
// declared property getter: - (double)messageTimeoutTime;	// 0x33fa7885
// declared property getter: - (id)messages;	// 0x33fa7369
- (void)removeAllMessages;	// 0x33fa7581
- (BOOL)removeMessage:(id)message;	// 0x33fa7399
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33fa7389
// declared property setter: - (void)setMessageTimeoutTime:(double)time;	// 0x33fa7859
// declared property getter: - (id)topMessage;	// 0x33fa7731
@end
