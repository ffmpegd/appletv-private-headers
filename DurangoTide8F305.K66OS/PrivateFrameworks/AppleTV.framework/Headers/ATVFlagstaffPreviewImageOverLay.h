/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRControl.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffPreviewImageOverLay : BRControl {
@private
	NSString *_text1;	// 44 = 0x2c
	NSString *_text2;	// 48 = 0x30
	NSString *_text3;	// 52 = 0x34
}
@property(copy, nonatomic) NSString *text1;	// G=0x307beee5; S=0x307bf6a1; @synthesize=_text1
@property(copy, nonatomic) NSString *text2;	// G=0x307beed5; S=0x307bf6cd; @synthesize=_text2
@property(copy, nonatomic) NSString *text3;	// G=0x307beec5; S=0x307bf6f9; @synthesize=_text3
- (id)init;	// 0x307bef61
- (void)dealloc;	// 0x307beef5
- (void)drawInContext:(CGContextRef)context;	// 0x307bf871
// declared property setter: - (void)setText1:(id)a1;	// 0x307bf6a1
// declared property setter: - (void)setText2:(id)a2;	// 0x307bf6cd
// declared property setter: - (void)setText3:(id)a3;	// 0x307bf6f9
// declared property getter: - (id)text1;	// 0x307beee5
// declared property getter: - (id)text2;	// 0x307beed5
// declared property getter: - (id)text3;	// 0x307beec5
@end
