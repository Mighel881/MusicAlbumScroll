#import <Cephei/HBPreferences.h>
#import <AudioToolbox/AudioServices.h>
#import <UIKit/UIKit.h>

@interface UICollectionView (Private)
@property (nonatomic, retain) UICollectionViewLayout * UICollectionViewLayout;
@end

@interface UIImageView (Private)
@end

@interface UIView (FindUIViewController)
- (UIViewController *) firstAvailableViewController;
- (id) traverseResponderChainForViewController;
@end

@interface UIScrollView (Private)
@end

@interface UICollectionViewCell (Private)
@end

@interface CALayer (Private)
@property (nonatomic, assign) BOOL continuousCorners;
@end

@interface UICollectionViewLayout (Private)
@property (nonatomic,assign) NSInteger scrollDirection;
@property (nonatomic, assign) BOOL _headerFollowsSectionMargins;
@property(nonatomic) UIEdgeInsets sectionInset;
@property (nonatomic) CGFloat minimumLineSpacing;
@property (nonatomic) CGFloat minimumInteritemSpacing;
@property (nonatomic, assign) CGSize itemSize;
@end

@interface _TtCC16MusicApplication9AlbumCell : UICollectionViewCell
@end

@interface _TtCC16MusicApplication27VerticalStackViewController10ScrollView : UIScrollView
@end
