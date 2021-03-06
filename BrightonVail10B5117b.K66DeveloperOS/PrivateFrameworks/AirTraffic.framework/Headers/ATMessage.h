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
@property(retain, nonatomic) NSString *name;	// G=0x335c3ef1; S=0x335c3f01; @synthesize=_name
@property(retain, nonatomic) NSDictionary *parameters;	// G=0x335c3f25; S=0x335c3f35; @synthesize=_params
@property(readonly, assign, nonatomic) unsigned sessionNumber;	// G=0x335c3f59; @synthesize=_session
@property(retain, nonatomic) NSData *sig;	// G=0x335c3f69; S=0x335c3f79; @synthesize=_sig
+ (unsigned)currentSessionNumber;	// 0x335c394d
+ (id)messageFromData:(id)data;	// 0x335c3a85
+ (id)messageFromDictionary:(id)dictionary;	// 0x335c398d
+ (id)messageWithName:(id)name parameters:(id)parameters;	// 0x335c3d1d
+ (id)messageWithName:(id)name parameters:(id)parameters session:(unsigned)session;	// 0x335c3dad
+ (unsigned)nextSessionNumber;	// 0x335c3939
+ (void)setSessionNumber:(unsigned)number;	// 0x335c395d
- (id)initWithDictionary:(id)dictionary;	// 0x335c3c25
- (id)data;	// 0x335c3be5
- (void)dealloc;	// 0x335c3de1
- (id)description;	// 0x335c3e59
- (id)dictionary;	// 0x335c3b19
// declared property getter: - (id)name;	// 0x335c3ef1
- (id)parameterForKey:(id)key;	// 0x335c396d
// declared property getter: - (id)parameters;	// 0x335c3f25
// declared property getter: - (unsigned)sessionNumber;	// 0x335c3f59
// declared property setter: - (void)setName:(id)name;	// 0x335c3f01
// declared property setter: - (void)setParameters:(id)parameters;	// 0x335c3f35
// declared property setter: - (void)setSig:(id)sig;	// 0x335c3f79
// declared property getter: - (id)sig;	// 0x335c3f69
@end

