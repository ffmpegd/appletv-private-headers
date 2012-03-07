/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <NSObject.h> // Unknown library

@class NSData, NSDictionary, NSString;

@interface ATMessage : NSObject {
	unsigned _session;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	NSDictionary *_params;	// 12 = 0xc
	NSData *_sig;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *name;	// G=0x3226f32d; S=0x3226f33d; @synthesize=_name
@property(retain, nonatomic) NSDictionary *parameters;	// G=0x3226f361; S=0x3226f371; @synthesize=_params
@property(readonly, assign, nonatomic) unsigned sessionNumber;	// G=0x3226f395; @synthesize=_session
@property(retain, nonatomic) NSData *sig;	// G=0x3226f3a5; S=0x3226f3b5; @synthesize=_sig
+ (unsigned)currentSessionNumber;	// 0x3226edc1
+ (id)messageFromData:(id)data;	// 0x3226eef9
+ (id)messageFromDictionary:(id)dictionary;	// 0x3226ee01
+ (id)messageWithName:(id)name parameters:(id)parameters;	// 0x3226f191
+ (unsigned)nextSessionNumber;	// 0x3226edad
+ (void)setSessionNumber:(unsigned)number;	// 0x3226edd1
- (id)initWithDictionary:(id)dictionary;	// 0x3226f095
- (id)data;	// 0x3226f055
- (void)dealloc;	// 0x3226f221
- (id)description;	// 0x3226f295
- (id)dictionary;	// 0x3226ef89
// declared property getter: - (id)name;	// 0x3226f32d
- (id)parameterForKey:(id)key;	// 0x3226ede1
// declared property getter: - (id)parameters;	// 0x3226f361
// declared property getter: - (unsigned)sessionNumber;	// 0x3226f395
// declared property setter: - (void)setName:(id)name;	// 0x3226f33d
// declared property setter: - (void)setParameters:(id)parameters;	// 0x3226f371
// declared property setter: - (void)setSig:(id)sig;	// 0x3226f3b5
// declared property getter: - (id)sig;	// 0x3226f3a5
@end

