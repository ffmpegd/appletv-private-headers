/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface WDCitationAuthor : NSObject {
	NSString *mFirst;	// 4 = 0x4
	NSString *mLast;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *first;	// G=0x37b523f9; S=0x37b52409; @synthesize=mFirst
@property(retain, nonatomic) NSString *last;	// G=0x37b52419; S=0x37b52429; @synthesize=mLast
- (id)initWithFirst:(id)first last:(id)last;	// 0x37b52381
- (void)dealloc;	// 0x37b5231d
// declared property getter: - (id)first;	// 0x37b523f9
// declared property getter: - (id)last;	// 0x37b52419
// declared property setter: - (void)setFirst:(id)first;	// 0x37b52409
// declared property setter: - (void)setLast:(id)last;	// 0x37b52429
@end

