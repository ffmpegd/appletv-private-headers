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
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31a0d9d5
- (id)init;	// 0x31a0d9d9
- (id)initWithUUIDBytes:(unsigned char [16])uuidbytes;	// 0x31a0da99
- (id)initWithUUIDString:(id)uuidstring;	// 0x31a0da1d
- (id)UUIDString;	// 0x31a0dc29
- (XXStruct_eX1N7A)_cfUUIDBytes;	// 0x31a0db9d
- (Class)classForCoder;	// 0x31a0dced
- (id)copyWithZone:(NSZone *)zone;	// 0x31a0dd09
- (id)description;	// 0x31a0dc85
- (void)getUUIDBytes:(unsigned char [16])bytes;	// 0x31a0db89
- (BOOL)isEqual:(id)equal;	// 0x31a0dae1
@end

