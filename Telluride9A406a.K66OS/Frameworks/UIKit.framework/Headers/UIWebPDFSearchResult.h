/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray;

@interface UIWebPDFSearchResult : NSObject {
@private
	NSArray *rotationAngles;	// 4 = 0x4
	unsigned pageIndex;	// 8 = 0x8
	NSArray *strings;	// 12 = 0xc
	NSString *string;	// 16 = 0x10
	CGRect boundingBox;	// 20 = 0x14
	NSArray *rects;	// 36 = 0x24
}
@property(assign, nonatomic) CGRect boundingBox;	// G=0x35a3bdfd; S=0x35a3be21; @synthesize
@property(assign, nonatomic) unsigned pageIndex;	// G=0x35a3bd75; S=0x35a3bd85; @synthesize
@property(retain, nonatomic) NSArray *rects;	// G=0x35a3be3d; S=0x35a3be4d; @synthesize
@property(retain, nonatomic) NSArray *rotationAngles;	// G=0x35a3bd41; S=0x35a3bd51; @synthesize
@property(retain, nonatomic) NSString *string;	// G=0x35a3bdc9; S=0x35a3bdd9; @synthesize
@property(retain, nonatomic) NSArray *strings;	// G=0x35a3bd95; S=0x35a3bda5; @synthesize
// declared property getter: - (CGRect)boundingBox;	// 0x35a3bdfd
// declared property getter: - (unsigned)pageIndex;	// 0x35a3bd75
// declared property getter: - (id)rects;	// 0x35a3be3d
// declared property getter: - (id)rotationAngles;	// 0x35a3bd41
// declared property setter: - (void)setBoundingBox:(CGRect)box;	// 0x35a3be21
// declared property setter: - (void)setPageIndex:(unsigned)index;	// 0x35a3bd85
// declared property setter: - (void)setRects:(id)rects;	// 0x35a3be4d
// declared property setter: - (void)setRotationAngles:(id)angles;	// 0x35a3bd51
// declared property setter: - (void)setString:(id)string;	// 0x35a3bdd9
// declared property setter: - (void)setStrings:(id)strings;	// 0x35a3bda5
// declared property getter: - (id)string;	// 0x35a3bdc9
// declared property getter: - (id)strings;	// 0x35a3bd95
@end
