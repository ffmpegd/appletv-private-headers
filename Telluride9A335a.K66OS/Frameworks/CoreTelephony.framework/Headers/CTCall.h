/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import "CoreTelephony-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface CTCall : NSObject {
@private
	NSString *_callState;	// 4 = 0x4
	NSString *_callID;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *callID;	// G=0x34fd853d; S=0x34fd854d; @synthesize=_callID
@property(copy, nonatomic) NSString *callState;	// G=0x34fd8509; S=0x34fd8519; @synthesize=_callState
+ (id)callForCTCallRef:(CTCallRef)ctcallRef;	// 0x34fd8281
// declared property getter: - (id)callID;	// 0x34fd853d
// declared property getter: - (id)callState;	// 0x34fd8509
- (void)dealloc;	// 0x34fd83d1
- (id)description;	// 0x34fd841d
- (unsigned)hash;	// 0x34fd84e9
- (BOOL)isEqual:(id)equal;	// 0x34fd847d
// declared property setter: - (void)setCallID:(id)anId;	// 0x34fd854d
// declared property setter: - (void)setCallState:(id)state;	// 0x34fd8519
@end
