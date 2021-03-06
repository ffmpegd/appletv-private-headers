/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library
#import "CoreDAV-Structs.h"


@interface CoreDAVLogging : NSObject {
	CFDictionaryRef _logDelegates;	// 4 = 0x4
}
+ (id)sharedLogging;	// 0x35ff43d9
- (id)init;	// 0x35ff4421
- (CFSetRef)_delegatesToLogForProvider:(id)provider;	// 0x35ff4591
- (BOOL)_shouldOutputAtLevel:(int)level forAccountInfoProvider:(id)accountInfoProvider;	// 0x35ff46a5
- (void)addLogDelegate:(id)delegate forAccountInfoProvider:(id)accountInfoProvider;	// 0x35ff44c5
- (void)dealloc;	// 0x35ff4485
- (CFSetRef)delegatesToLogTransmittedDataForAccountInfoProvider:(id)accountInfoProvider;	// 0x35ff4755
- (void)logDiagnosticForProvider:(id)provider withLevel:(int)level format:(id)format args:(void *)args;	// 0x35ff4795
- (void)removeLogDelegate:(id)delegate forAccountInfoProvider:(id)accountInfoProvider;	// 0x35ff4545
- (BOOL)shouldLogAtLevel:(int)level forAccountInfoProvider:(id)accountInfoProvider;	// 0x35ff45f5
@end

