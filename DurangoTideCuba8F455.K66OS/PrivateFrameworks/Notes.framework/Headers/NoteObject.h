/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <NSManagedObject.h> // Unknown library

@class NSURL, NSString, NSNumber, NSData, NSDate, NoteStoreObject, NoteBodyObject;

@interface NoteObject : NSManagedObject {
}
@property(retain, nonatomic) NSString *author;	// @dynamic
@property(retain, nonatomic) NoteBodyObject *body;	// @dynamic
@property(retain, nonatomic) NSNumber *containsCJK;	// @dynamic
@property(retain, nonatomic) NSString *content;	// G=0x31d73895; S=0x31d738b9; 
@property(readonly, assign, nonatomic) NSString *contentAsPlainText;	// G=0x31d73871; 
@property(retain, nonatomic) NSNumber *contentType;	// @dynamic
@property(retain, nonatomic) NSDate *creationDate;	// @dynamic
@property(retain, nonatomic) NSNumber *deletedFlag;	// @dynamic
@property(retain, nonatomic) NSString *externalContentRef;	// G=0x31d73605; S=0x31d735dd; 
@property(retain, nonatomic) NSNumber *externalFlags;	// @dynamic
@property(retain, nonatomic) NSData *externalRepresentation;	// G=0x31d73651; S=0x31d73629; 
@property(retain, nonatomic) NSNumber *externalServerIntId;	// @dynamic
@property(assign, nonatomic) unsigned long long flags;	// G=0x31d73715; S=0x31d73739; 
@property(retain, nonatomic) NSString *guid;	// @dynamic
@property(readonly, assign, nonatomic) BOOL hasValidServerIntId;	// G=0x31d73675; 
@property(retain, nonatomic) NSNumber *integerId;	// @dynamic
@property(retain, nonatomic) NSNumber *isBookkeepingEntry;	// @dynamic
@property(readonly, assign, nonatomic) BOOL isMarkedForDeletion;	// G=0x31d73791; 
@property(assign, nonatomic) BOOL isPlainText;	// G=0x31d737e9; S=0x31d73815; 
@property(retain, nonatomic) NSDate *modificationDate;	// @dynamic
@property(readonly, assign, nonatomic) NSURL *noteId;	// G=0x31d7376d; 
@property(retain, nonatomic) NSString *serverId;	// @dynamic
@property(assign, nonatomic) long long serverIntId;	// G=0x31d736bd; S=0x31d736e1; 
@property(retain, nonatomic) NoteStoreObject *store;	// @dynamic
@property(retain, nonatomic) NSString *summary;	// @dynamic
@property(retain, nonatomic) NSString *title;	// @dynamic
// declared property getter: - (id)content;	// 0x31d73895
// declared property getter: - (id)contentAsPlainText;	// 0x31d73871
// declared property getter: - (id)externalContentRef;	// 0x31d73605
// declared property getter: - (id)externalRepresentation;	// 0x31d73651
// declared property getter: - (unsigned long long)flags;	// 0x31d73715
// declared property getter: - (BOOL)hasValidServerIntId;	// 0x31d73675
// declared property getter: - (BOOL)isMarkedForDeletion;	// 0x31d73791
// declared property getter: - (BOOL)isPlainText;	// 0x31d737e9
- (void)markForDeletion;	// 0x31d737b5
// declared property getter: - (id)noteId;	// 0x31d7376d
// declared property getter: - (long long)serverIntId;	// 0x31d736bd
// declared property setter: - (void)setContent:(id)content;	// 0x31d738b9
// declared property setter: - (void)setExternalContentRef:(id)ref;	// 0x31d735dd
// declared property setter: - (void)setExternalRepresentation:(id)representation;	// 0x31d73629
// declared property setter: - (void)setFlags:(unsigned long long)flags;	// 0x31d73739
// declared property setter: - (void)setIsPlainText:(BOOL)text;	// 0x31d73815
// declared property setter: - (void)setServerIntId:(long long)anId;	// 0x31d736e1
@end
