/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import <Foundation/NSDictionary.h>


@interface NSDictionary (MCUtilities)
- (id)MCDeepCopy;	// 0x3137dd11
- (id)MCDeepCopyWithZone:(NSZone *)zone;	// 0x3137dd01
- (id)MCMutableDeepCopy;	// 0x3137dced
- (id)MCMutableDeepCopyWithZone:(NSZone *)zone;	// 0x3137da99
- (id)MCRetainOptionalNonZeroLengthStringKey:(id)key errorDomain:(id)domain invalidDataCode:(int)code invalidDataErrorString:(id)string outError:(id *)error;	// 0x3137e145
- (id)MCRetainOptionalObjectKey:(id)key type:(Class)type errorDomain:(id)domain invalidDataCode:(int)code invalidDataErrorString:(id)string outError:(id *)error;	// 0x3137dea1
- (id)MCRetainRequiredNonZeroLengthStringKey:(id)key errorDomain:(id)domain missingDataCode:(int)code missingDataErrorString:(id)string invalidDataCode:(int)code5 invalidDataErrorString:(id)string6 outError:(id *)error;	// 0x3137dfa1
- (id)MCRetainRequiredObjectKey:(id)key type:(Class)type errorDomain:(id)domain missingDataCode:(int)code missingDataErrorString:(id)string invalidDataCode:(int)code6 invalidDataErrorString:(id)string7 outError:(id *)error;	// 0x3137dd25
@end

