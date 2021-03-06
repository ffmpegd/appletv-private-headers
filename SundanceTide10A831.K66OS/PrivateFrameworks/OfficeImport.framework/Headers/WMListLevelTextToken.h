/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface WMListLevelTextToken : NSObject {
	NSString *m_string;	// 4 = 0x4
	int m_level;	// 8 = 0x8
}
@property(readonly, assign) int level;	// G=0x36ace0f9; converted property
@property(readonly, retain) NSString *string;	// G=0x36ace0e9; converted property
+ (id)tokenWithString:(id)string andLevel:(int)level;	// 0x36acdea1
- (id)initWithString:(id)string andLevel:(int)level;	// 0x36acdeed
- (void)dealloc;	// 0x36ace325
// converted property getter: - (int)level;	// 0x36ace0f9
// converted property getter: - (id)string;	// 0x36ace0e9
- (id)stringForIndex:(int)index withFormat:(int)format initialNumber:(int)number;	// 0x36ace125
@end

