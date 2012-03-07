/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSError.h> // Unknown library


@interface NSError (BRError)
+ (id)errorWithBRError:(int)brerror;	// 0x342aaa0d
+ (id)errorWithBRError:(int)brerror withDescription:(id)description withReason:(id)reason andSuggestion:(id)suggestion;	// 0x342aabc1
+ (id)errorWithBRError:(int)brerror withDescription:(id)description withReason:(id)reason andSuggestion:(id)suggestion userInfo:(id)info;	// 0x342aabed
- (void)postBRErrorNotificationFromObject:(id)object;	// 0x342aacf1
@end

@interface NSError (JSAdditions)
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x3430ff55
@end

@interface NSError (ISAdditions)
- (id)errorBySettingFatalError:(BOOL)error;	// 0x3431d285
- (BOOL)isEqual:(id)equal compareUserInfo:(BOOL)info;	// 0x3431d2bd
- (BOOL)isFatalError;	// 0x3431d489
@end

