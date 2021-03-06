/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray;

@interface AVAudioSessionPortDescription : NSObject {
	void *_impl;	// 4 = 0x4
}
@property(readonly, assign) NSString *UID;	// G=0x317361c5; 
@property(readonly, assign) NSArray *channels;	// G=0x3173618d; 
@property(readonly, assign) NSString *portName;	// G=0x31736155; 
@property(readonly, assign) NSString *portType;	// G=0x3173611d; 
+ (id)privateCreatePortDescriptionsArrayWithCFArray:(CFArrayRef)cfarray;	// 0x317364cd
+ (id)privateCreateWithCFDictionaryRef:(CFDictionaryRef)cfdictionaryRef;	// 0x31736289
- (id)init;	// 0x31735fdd
// declared property getter: - (id)UID;	// 0x317361c5
// declared property getter: - (id)channels;	// 0x3173618d
- (void)dealloc;	// 0x3173602d
- (id)description;	// 0x317361fd
// declared property getter: - (id)portName;	// 0x31736155
// declared property getter: - (id)portType;	// 0x3173611d
- (PortDescriptionImpl *)privateGetImplementation;	// 0x31736279
@end

