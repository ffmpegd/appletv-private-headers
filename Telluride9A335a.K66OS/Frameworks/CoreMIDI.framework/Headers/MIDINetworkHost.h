/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

#import <NSObject.h> // Unknown library
#import "CoreMIDI-Structs.h"

@class NSString;

@interface MIDINetworkHost : NSObject {
@private
	MIDINetworkHostImpl *_impl;	// 4 = 0x4
}
@property(readonly, retain, nonatomic) NSString *address;	// G=0x31c75b71; 
@property(readonly, retain, nonatomic) NSString *name;	// G=0x31c75b5d; 
@property(readonly, retain, nonatomic) NSString *netServiceDomain;	// G=0x31c75bb1; 
@property(readonly, retain, nonatomic) NSString *netServiceName;	// G=0x31c75b9d; 
@property(readonly, assign, nonatomic) unsigned port;	// G=0x31c75b85; 
+ (id)fromAddressAsText:(id)addressAsText withName:(id)name;	// 0x31c77539
+ (id)hostWithName:(id)name address:(id)address port:(unsigned)port;	// 0x31c774a1
+ (id)hostWithName:(id)name netService:(id)service;	// 0x31c7768d
+ (id)hostWithName:(id)name netServiceName:(id)name2 netServiceDomain:(id)domain;	// 0x31c776f1
- (id)init;	// 0x31c777dd
// declared property getter: - (id)address;	// 0x31c75b71
- (id)addressAsText;	// 0x31c7738d
- (void)dealloc;	// 0x31c77791
- (id)description;	// 0x31c77165
- (id)displayName;	// 0x31c773f1
- (BOOL)hasSameAddressAs:(id)as;	// 0x31c77241
- (id)host;	// 0x31c75b99
// declared property getter: - (id)name;	// 0x31c75b5d
// declared property getter: - (id)netServiceDomain;	// 0x31c75bb1
// declared property getter: - (id)netServiceName;	// 0x31c75b9d
// declared property getter: - (unsigned)port;	// 0x31c75b85
- (void)setName:(id)name;	// 0x31c771fd
@end

