/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDKeyedObject.h"
#import </libobjc.A.h>

@class CHDDataLabel, CHDMarker, OADGraphicProperties;

@interface CHDDataValueProperties : NSObject <EDKeyedObject> {
	CHDDataLabel *mDataLabel;	// 4 = 0x4
	CHDMarker *mMarker;	// 8 = 0x8
	unsigned mDataValueIndex;	// 12 = 0xc
	OADGraphicProperties *mGraphicProperties;	// 16 = 0x10
}
@property(retain) id dataLabel;	// G=0x318b0d55; S=0x318589e9; converted property
@property(assign) unsigned dataValueIndex;	// G=0x31857031; S=0x31856069; converted property
@property(retain) id graphicProperties;	// G=0x31856151; S=0x318560b9; converted property
@property(retain) id marker;	// G=0x318b0d65; S=0x318560fd; converted property
+ (id)dataValueProperties;	// 0x318589a1
- (id)init;	// 0x31856025
// converted property getter: - (id)dataLabel;	// 0x318b0d55
// converted property getter: - (unsigned)dataValueIndex;	// 0x31857031
- (void)dealloc;	// 0x31858b01
// converted property getter: - (id)graphicProperties;	// 0x31856151
- (int)key;	// 0x31856141
// converted property getter: - (id)marker;	// 0x318b0d65
// converted property setter: - (void)setDataLabel:(id)label;	// 0x318589e9
// converted property setter: - (void)setDataValueIndex:(unsigned)index;	// 0x31856069
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x318560b9
// converted property setter: - (void)setMarker:(id)marker;	// 0x318560fd
- (id)shallowCopyWithIndex:(unsigned)index;	// 0x318588f5
@end

