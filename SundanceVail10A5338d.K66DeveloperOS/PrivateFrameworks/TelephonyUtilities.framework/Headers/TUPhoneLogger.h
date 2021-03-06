/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import "TelephonyUtilities-Structs.h"
#import "TULogger.h"
#import <NSObject.h> // Unknown library

@class TURemoteAppender, TUInMemoryAppender;

@interface TUPhoneLogger : NSObject <TULogger> {
	int _lock;	// 4 = 0x4
	id _signalHandler;	// 8 = 0x8
	TUInMemoryAppender *_inMemoryAppender;	// 12 = 0xc
	TURemoteAppender *_remoteAppender;	// 16 = 0x10
	int _loggingConfiguration;	// 20 = 0x14
	BOOL _loggingConfigurationCached;	// 24 = 0x18
	dispatch_queue_s *_appenderQueue;	// 28 = 0x1c
}
@property(readonly, retain) id signalHandler;	// G=0x33d26a81; converted property
+ (id)sharedPhoneLogger;	// 0x33d26675
- (id)init;	// 0x33d26889
- (id)_appender;	// 0x33d26d6d
- (void)_handleSignal:(int)signal;	// 0x33d266e1
- (void)_loggingChanged;	// 0x33d26afd
- (int)_loggingConfiguration;	// 0x33d26b45
- (BOOL)_shouldLogWithLevel:(int)level topic:(id)topic;	// 0x33d26d51
- (void)dealloc;	// 0x33d269e9
- (id)identifier;	// 0x33d26a91
- (void)logWithLevel:(int)level topic:(id)topic backtrace:(BOOL)backtrace format:(id)format;	// 0x33d26db5
- (void)logWithLevel:(int)level topic:(id)topic backtrace:(BOOL)backtrace format:(id)format args:(void *)args;	// 0x33d27261
- (void)logWithLevel:(int)level topic:(id)topic backtrace:(BOOL)backtrace text:(id)text;	// 0x33d27021
- (BOOL)shouldLog;	// 0x33d274c9
- (BOOL)shouldLogWithLevel:(int)level topic:(id)topic;	// 0x33d27509
// converted property getter: - (id)signalHandler;	// 0x33d26a81
@end

