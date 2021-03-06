/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface BRDeviceKeyboardMessage : XXUnknownSuperclass {
	NSString *_string;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSString *_subText;	// 12 = 0xc
	unsigned long long _sessionID;	// 16 = 0x10
	int _msgType;	// 24 = 0x18
	int _keyboardType;	// 28 = 0x1c
	BOOL _secureText;	// 32 = 0x20
	unsigned _version;	// 36 = 0x24
}
@property(assign) int keyboardType;	// G=0x384c9d; S=0x384cad; converted property
@property(assign) int msgType;	// G=0x384c7d; S=0x384c8d; converted property
@property(assign) BOOL secureText;	// G=0x384d09; S=0x384d19; converted property
@property(assign) unsigned long long sessionID;	// G=0x384cbd; S=0x384cd5; converted property
@property(retain) NSString *string;	// G=0x384b99; S=0x384ba9; converted property
@property(retain) NSString *subText;	// G=0x384c31; S=0x384c41; converted property
@property(retain) NSString *title;	// G=0x384be5; S=0x384bf5; converted property
@property(assign) unsigned version;	// G=0x384ce9; S=0x384cf9; converted property
+ (id)_dictionaryArraytoDictionary:(id)dictionary;	// 0x384e45
+ (id)_keyValueToDictionary:(id)dictionary key:(id)key;	// 0x384f49
+ (id)dictionaryToDictionaryArray:(id)dictionaryArray;	// 0x384d29
+ (id)messageFromDictionary:(id)dictionary;	// 0x384709
+ (id)messageFromDictionaryArray:(id)dictionaryArray;	// 0x3846d1
+ (unsigned long)vendNewSessionID;	// 0x3846bd
- (void)dealloc;	// 0x3848f5
- (id)dictionary;	// 0x3849a5
- (id)dictionaryArray;	// 0x38496d
// converted property getter: - (int)keyboardType;	// 0x384c9d
// converted property getter: - (int)msgType;	// 0x384c7d
// converted property getter: - (BOOL)secureText;	// 0x384d09
// converted property getter: - (unsigned long long)sessionID;	// 0x384cbd
// converted property setter: - (void)setKeyboardType:(int)type;	// 0x384cad
// converted property setter: - (void)setMsgType:(int)type;	// 0x384c8d
// converted property setter: - (void)setSecureText:(BOOL)text;	// 0x384d19
// converted property setter: - (void)setSessionID:(unsigned long long)anId;	// 0x384cd5
// converted property setter: - (void)setString:(id)string;	// 0x384ba9
// converted property setter: - (void)setSubText:(id)text;	// 0x384c41
// converted property setter: - (void)setTitle:(id)title;	// 0x384bf5
// converted property setter: - (void)setVersion:(unsigned)version;	// 0x384cf9
// converted property getter: - (id)string;	// 0x384b99
// converted property getter: - (id)subText;	// 0x384c31
// converted property getter: - (id)title;	// 0x384be5
// converted property getter: - (unsigned)version;	// 0x384ce9
@end

