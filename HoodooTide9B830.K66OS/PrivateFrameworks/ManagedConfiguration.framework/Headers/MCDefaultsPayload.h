/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSDictionary;

@interface MCDefaultsPayload : MCPayload {
	NSDictionary *_defaultsByDomain;	// 40 = 0x28
}
+ (id)_allowedDefaults;	// 0x33b0fcf1
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x33b100e9
+ (id)typeStrings;	// 0x33b0fcc9
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x33b10441
- (BOOL)_checkForValidDefaults:(id)validDefaults outError:(id *)error;	// 0x33b0fda9
- (void)dealloc;	// 0x33b1009d
- (id)defaultsForDomain:(id)domain;	// 0x33b0fc99
- (id)description;	// 0x33b10229
- (id)domains;	// 0x33b0fc79
- (id)stubDictionary;	// 0x33b102a9
- (id)subtitle1Description;	// 0x33b10149
@end

