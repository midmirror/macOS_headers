//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBSerializable.h"
#import "NSCopying.h"

@class DBSHARINGAccessLevel, DBSHARINGMemberSelector, NSString;

@interface DBSHARINGAddMember : NSObject <DBSerializable, NSCopying>
{
    DBSHARINGMemberSelector *_member;
    DBSHARINGAccessLevel *_accessLevel;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) DBSHARINGAccessLevel *accessLevel; // @synthesize accessLevel=_accessLevel;
@property(readonly, nonatomic) DBSHARINGMemberSelector *member; // @synthesize member=_member;
- (void).cxx_destruct;
- (BOOL)isEqualToAddMember:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithMember:(id)arg1;
- (id)initWithMember:(id)arg1 accessLevel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

