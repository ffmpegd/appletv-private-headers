/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDTCell.h"

@class GQDTComputedFormatSpec;

@interface GQDTNumberCell : GQDTCell {
	double mValue;	// 16 = 0x10
	GQDTComputedFormatSpec *mComputedFormat;	// 24 = 0x18
}
- (CFStringRef)createStringValue;	// 0x35085e59
- (void)dealloc;	// 0x35085df5
- (int)readAttributesForNCell:(xmlTextReader *)ncell;	// 0x35085f81
- (int)readAttributesForNumberCell:(xmlTextReader *)numberCell;	// 0x35085f29
- (double)value;	// 0x35085e41
@end
