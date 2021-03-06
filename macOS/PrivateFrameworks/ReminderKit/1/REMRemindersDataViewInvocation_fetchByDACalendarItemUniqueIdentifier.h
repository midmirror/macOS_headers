//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ReminderKit/REMStoreInvocation.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSArray, REMObjectID;

@interface REMRemindersDataViewInvocation_fetchByDACalendarItemUniqueIdentifier : REMStoreInvocation <NSSecureCoding>
{
    NSArray *_daCalendarItemUniqueIdentifiers;
    REMObjectID *_listObjectID;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) REMObjectID *listObjectID; // @synthesize listObjectID=_listObjectID;
@property(readonly, nonatomic) NSArray *daCalendarItemUniqueIdentifiers; // @synthesize daCalendarItemUniqueIdentifiers=_daCalendarItemUniqueIdentifiers;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDACalendarItemUniqueIdentifiers:(id)arg1 listObjectID:(id)arg2;

@end

