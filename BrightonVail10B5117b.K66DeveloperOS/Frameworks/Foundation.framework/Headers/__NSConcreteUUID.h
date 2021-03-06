/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSUUID.h"


__attribute__((visibility("hidden")))
@interface __NSConcreteUUID : NSUUID {
	unsigned char _uuidBytes[16];	// 4 = 0x4
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31aaca1d
- (id)init;	// 0x31aaca21
- (id)initWithUUIDBytes:(unsigned char [16])uuidbytes;	// 0x31aacae1
- (id)initWithUUIDString:(id)uuidstring;	// 0x31aaca65
- (id)UUIDString;	// 0x31aacc71
- (XXStruct_eX1N7A)_cfUUIDBytes;	// 0x31aacbe5
- (Class)classForCoder;	// 0x31aacd35
- (id)copyWithZone:(NSZone *)zone;	// 0x31aacd51
- (id)description;	// 0x31aacccd
- (void)getUUIDBytes:(unsigned char [16])bytes;	// 0x31aacbd1
- (BOOL)isEqual:(id)equal;	// 0x31aacb29
@end

