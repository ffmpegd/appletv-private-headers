/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "ABVCardParser.h"

@class NSData, NSMutableDictionary;

@interface ABVCardCardDAVParser : ABVCardParser {
@private
	NSMutableDictionary *_unknownAttributes;	// 160 = 0xa0
	BOOL _removeExistingProperties;	// 164 = 0xa4
	BOOL _localRecordHasAdditionalProperties;	// 165 = 0xa5
	int _lastCropRectX;	// 168 = 0xa8
	int _lastCropRectY;	// 172 = 0xac
	int _lastCropRectWidth;	// 176 = 0xb0
	int _lastCropRectHeight;	// 180 = 0xb4
	NSData *_lastCropRectChecksum;	// 184 = 0xb8
}
@property(readonly, assign) NSData *lastCropRectChecksum;	// G=0x3401a845; @synthesize=_lastCropRectChecksum
@property(readonly, assign) int lastCropRectHeight;	// G=0x3401a855; @synthesize=_lastCropRectHeight
@property(readonly, assign) int lastCropRectWidth;	// G=0x3401a865; @synthesize=_lastCropRectWidth
@property(readonly, assign) int lastCropRectX;	// G=0x3401a885; @synthesize=_lastCropRectX
@property(readonly, assign) int lastCropRectY;	// G=0x3401a875; @synthesize=_lastCropRectY
@property(readonly, assign) BOOL localRecordHasAdditionalProperties;	// G=0x3401a895; @synthesize=_localRecordHasAdditionalProperties
- (id)initWithData:(id)data;	// 0x34021a61
- (BOOL)_handleUnknownTag:(id)tag withValue:(id)value;	// 0x3401d76d
- (void)cleanUpCardState;	// 0x34021ad1
- (void *)createRecordInSource:(void *)source outRecordType:(unsigned *)type;	// 0x34021ca5
- (void)dealloc;	// 0x34021db5
- (id)defaultADRLabel;	// 0x3401a83d
- (id)defaultLabel;	// 0x3401a839
- (id)defaultURLLabel;	// 0x3401a841
- (id)genericLabel;	// 0x3401d709
- (BOOL)importToGroup:(void *)group removeExistingProperties:(BOOL)properties;	// 0x3401df89
- (BOOL)importToPerson:(void *)person removeExistingProperties:(BOOL)properties;	// 0x3401d87d
// declared property getter: - (id)lastCropRectChecksum;	// 0x3401a845
// declared property getter: - (int)lastCropRectHeight;	// 0x3401a855
// declared property getter: - (int)lastCropRectWidth;	// 0x3401a865
// declared property getter: - (int)lastCropRectX;	// 0x3401a885
// declared property getter: - (int)lastCropRectY;	// 0x3401a875
// declared property getter: - (BOOL)localRecordHasAdditionalProperties;	// 0x3401a895
- (void)noteLackOfValueForImageData;	// 0x3401e06d
- (void)noteLackOfValueForProperty:(unsigned)property;	// 0x34021bb1
- (BOOL)parseUID;	// 0x3401d719
- (void)setLocalRecordHasAdditionalProperties:(BOOL)properties;	// 0x3401a829
@end

