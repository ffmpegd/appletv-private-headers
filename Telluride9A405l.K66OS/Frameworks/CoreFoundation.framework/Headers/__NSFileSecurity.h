/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import "NSFileSecurity.h"


__attribute__((visibility("hidden")))
@interface __NSFileSecurity : NSFileSecurity <NSCopying, NSCoding> {
@private
	filesec *_filesec;	// 4 = 0x4
}
+ (id)__new:(filesec *)aNew;	// 0x35337f1d
+ (id)allocWithZone:(NSZone *)zone;	// 0x353384b9
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x353384b5
- (id)initWithCoder:(id)coder;	// 0x353386bd
- (filesec *)_filesec;	// 0x35337f39
- (BOOL)copyAccessControlList:(acl **)list;	// 0x35338115
- (id)copyWithZone:(NSZone *)zone;	// 0x35338455
- (void)dealloc;	// 0x35338175
- (id)description;	// 0x3533820d
- (void)encodeWithCoder:(id)coder;	// 0x353384d5
- (void)finalize;	// 0x353381b9
- (BOOL)getGroup:(unsigned *)group;	// 0x35337fa5
- (BOOL)getGroupUUID:(unsigned char (*)[16])uuid;	// 0x353380bd
- (BOOL)getMode:(unsigned short *)mode;	// 0x35338001
- (BOOL)getOwner:(unsigned *)owner;	// 0x35337f49
- (BOOL)getOwnerUUID:(unsigned char (*)[16])uuid;	// 0x35338065
- (unsigned)hash;	// 0x353381fd
- (BOOL)isEqual:(id)equal;	// 0x35338201
- (BOOL)setAccessControlList:(acl *)list;	// 0x35338139
- (BOOL)setGroup:(unsigned)group;	// 0x35337fd5
- (BOOL)setGroupUUID:(unsigned char [16])uuid;	// 0x353380f1
- (BOOL)setMode:(unsigned short)mode;	// 0x35338035
- (BOOL)setOwner:(unsigned)owner;	// 0x35337f79
- (BOOL)setOwnerUUID:(unsigned char [16])uuid;	// 0x35338099
@end

