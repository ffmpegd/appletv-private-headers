/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoder.h"
#import "Foundation-Structs.h"

@protocol NSObject;

@interface NSXPCCoder : NSCoder {
	id<NSObject> _userInfo;	// 4 = 0x4
	id _reserved1;	// 8 = 0x8
}
@property(retain) id<NSObject> userInfo;	// G=0x361cb281; S=0x360b2bd5; @synthesize=_userInfo
- (void)dealloc;	// 0x360b3d35
- (id)decodeXPCObjectForKey:(id)key;	// 0x361cb279
- (void)encodeXPCObject:(id)object forKey:(id)key;	// 0x361cb275
- (BOOL)requiresSecureCoding;	// 0x361cb271
// declared property setter: - (void)setUserInfo:(id)info;	// 0x360b2bd5
// declared property getter: - (id)userInfo;	// 0x361cb281
@end
