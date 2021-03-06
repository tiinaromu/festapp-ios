//
//  Gig.h
//  FestApp
//

#import <Foundation/Foundation.h>

@interface Gig : NSObject {

    BOOL favorite;
}

@property (nonatomic, strong) NSString *artistId;
@property (nonatomic, strong) NSString *artistName;
@property (nonatomic, strong) NSString *artistNameForTimelineDisplay;
@property (nonatomic, strong) NSString *country;
@property (nonatomic, strong) NSDate *date;
@property (nonatomic, strong) NSDate *begin;
@property (nonatomic, strong) NSDate *end;
@property (nonatomic, strong) NSString *venue;
@property (nonatomic, strong) NSString *descriptionHTML;
@property (nonatomic, strong) NSURL *imageURL;
@property (nonatomic, strong) NSMutableArray *alternativeGigs;

@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) BOOL isLoadingArtistImage;
@property (nonatomic, readonly) BOOL hasLoadedArtistImage;

@property (nonatomic, readonly) NSString *timeIntervalString;
@property (nonatomic, readonly) NSString *stageAndTimeIntervalString;
@property (nonatomic, readonly) NSTimeInterval duration;
@property (nonatomic, assign, getter=isFavorite) BOOL favorite;

+ (NSArray *)gigsFromArrayOfDicts:(NSArray *)dicts;

NSInteger alphabeticalGigSort(id gig1, id gig2, void *context);
NSInteger chronologicalGigSort(id gig1, id gig2, void *context);

@end
