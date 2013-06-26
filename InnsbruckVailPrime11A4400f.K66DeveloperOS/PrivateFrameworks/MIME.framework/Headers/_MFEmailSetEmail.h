/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import </libobjc.A.h>

@class NSString;

@interface _MFEmailSetEmail : NSObject {
	unsigned long _hash;	// 4 = 0x4
	NSString *_encodedAddress;	// 8 = 0x8
	NSString *_comment;	// 12 = 0xc
}
@property(retain, nonatomic) NSString *address;	// G=0x312d0399; S=0x312d02b5; 
@property(readonly, assign, nonatomic) NSString *commentedAddress;	// G=0x312d03d1; 
@property(readonly, assign, nonatomic) unsigned long hash;	// G=0x312d027d; 
- (id)initWithAddress:(id)address;	// 0x312d014d
// declared property getter: - (id)address;	// 0x312d0399
// declared property getter: - (id)commentedAddress;	// 0x312d03d1
- (void)dealloc;	// 0x312d01b9
- (id)description;	// 0x312d021d
// declared property getter: - (unsigned long)hash;	// 0x312d027d
- (BOOL)isEqualToEmail:(id)email;	// 0x312d028d
// declared property setter: - (void)setAddress:(id)address;	// 0x312d02b5
@end
