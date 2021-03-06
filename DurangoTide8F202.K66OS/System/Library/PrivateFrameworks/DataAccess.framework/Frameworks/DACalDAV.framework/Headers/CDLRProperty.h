/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface CDLRProperty : NSObject {
	int type;	// 4 = 0x4
	NSString *value;	// 8 = 0x8
	int statusCode;	// 12 = 0xc
}
@property(assign, nonatomic) int statusCode;	// G=0x32cfd9d9; S=0x32cfd9e9; @synthesize
@property(assign, nonatomic) int type;	// G=0x32cfda09; S=0x32cfda19; @synthesize
@property(retain, nonatomic) NSString *value;	// G=0x32cfd9f9; S=0x32cfdedd; @synthesize
- (id)initWithType:(int)type value:(id)value statusCode:(int)code;	// 0x32cfde75
- (void)dealloc;	// 0x32cfde2d
// declared property setter: - (void)setStatusCode:(int)code;	// 0x32cfd9e9
// declared property setter: - (void)setType:(int)type;	// 0x32cfda19
// declared property setter: - (void)setValue:(id)value;	// 0x32cfdedd
// declared property getter: - (int)statusCode;	// 0x32cfd9d9
// declared property getter: - (int)type;	// 0x32cfda09
// declared property getter: - (id)value;	// 0x32cfd9f9
@end

